/*------------------------------ Librairies ---------------------------------*/
#include <ArduinoJson.h>
#include <Capteur_MPU6050.h>
#include <MPU6050.h>
#include <Sonar.h>
#include <MotorControl.h>
#include <SoftTimer.h>
#include <ArduinoJson.h>
#include <PID.h>
#include <PID_v1.h>
#include <Arduino.h>
/*------------------------------ Constantes ---------------------------------*/

#define BAUD 115200        // Frequence de transmission serielle
#define UPDATE_PERIODE 100 // Periode (ms) d'envoie d'etat general

/*---------------------------- variables globales ---------------------------*/
Capteur_MPU6050 imu_; // Objet IMU
double angleX;        // Variable pour angle X
double angleY;        // Variable pour angle Y

MotorControl motor_(12, 11, 10, 9); // Objet moteur
Sonar rangeSensor_(8, 7);           // Objet sonar

volatile bool shouldSend_ = false;  // drapeau prêt à envoyer un message
volatile bool shouldRead_ = false;  // drapeau prêt à lire un message
volatile bool shouldPulse_ = false; // drapeau pour effectuer un pulse
volatile bool isInPulse_ = false;   // drapeau pour effectuer un pulse
uint16_t pulseTime_ = 0;            // temps dun pulse en ms
float pulsePWM_ = 0;                // amplitude de la tension au moteur [-1,1]

String error_;           // message d'erreur pour le deverminage
SoftTimer timerSendMsg_; // chronometre d'envoie de messages
SoftTimer timerPulse_;   // chronometre pour la duree d'un pulse

//PID POUR L'ANGLE
float a_param[5] = {0.15, 1, 0, 0.2, 0}; //{kp,ki,kd,seuil,goal}
PID a_pid(a_param[0], a_param[1], a_param[3]);
double (*ptr_a_read)();

//PID POUR LA POSITION
float x_param[5] = {0, 0, 0, 0, 0};
PID x_pid(x_param[0], x_param[1], x_param[3]);
double (*ptr_x_read)();

//POINTEUR POUR LA FUNCTION DE COMMANDE DES MOTEURS
void (*ptr_motor_command)(double);

//POINTEUR POUR LA FUNCTION DE a_pid.run();
void (*ptr_at_goal)();

double (*ptr_a_x)();
//VARIABLE POUR INITIALISER LES PID
bool a_pid_state = false;
bool x_pid_state = false;
int etat_robot = 1; //1: stablisation, 2: position + stabilisation

double a_command = 0, x_command = 0, pwm_command = 0;

double commande;
double setPoint = 0;
double kp = 0, ki = 0, kd = 0;
PID_v1 angle_pid(&angleX, &commande, &setPoint, kp,ki, kd, DIRECT);
void init_pid(){
  angle_pid.SetOutputLimits(-255, 255);
  angle_pid.SetMode(AUTOMATIC);
}
/*---------------------------Definition de fonctions ------------------------*/
void serialEvent()
{
  shouldRead_ = true;
}

//Lire message du RPI
void readSerial()
{
  StaticJsonDocument<512> doc;
  DeserializationError err = deserializeJson(doc, Serial);
  if (err)
  {
    error_ = "erreur deserialisation.";
    return;
  }
  else
  {
    error_ = "";
  }
  // Analyse du message
  bool pulse = doc["pulse"];
  if (pulse)
  {
    shouldPulse_ = true;
  }

  uint16_t pulseTime = doc["pulseTime"];
  if (pulseTime)
  {
    pulseTime_ = pulseTime;
  }

  float pulsePWM = doc["pulsePWM"];
  if (pulsePWM)
  {
    pulsePWM_ = pulsePWM;
  }

  JsonArray angle_param = doc["angle_parametre"];
  if (angle_param)
  {
    a_param[0] = angle_param[0];
    a_param[1] = angle_param[1];
    a_param[2] = angle_param[2];
    a_param[3] = angle_param[3];
    a_param[4] = angle_param[4];
  }

  JsonArray x1_param = doc["x_parametre"];
  if (x1_param)
  {
    x_param[0] = x1_param[0];
    x_param[1] = x1_param[1];
    x_param[2] = x1_param[2];
    x_param[3] = x1_param[3];
    x_param[4] = x1_param[4];
  }

  int etat = doc["etat"];
  if (etat)
  {
    etat_robot = etat;
  }

  shouldRead_ = false;
}

//Envoi d'un message au RPI
void sendSerial()
{
  StaticJsonDocument<512> doc;
  // Construction du message a envoyer
  imu_.getAngles(&angleX, &angleY, 2);
  doc["time"] = millis();
  doc["angleX"] = angleX;
  doc["sonar"] = rangeSensor_.getRange();
  //doc["error"] = error_;
  // doc["inPulse"] = isInPulse_;
  doc["kp_angle"] = a_param[0];
  // doc["ki_angle"] = a_param[1];
  //doc["kd_angle"] = a_param[2];
  //doc["seuil_angle"] = a_param[3];
  //doc["pos_angle"] = a_param[4];
  //doc["kp_x"] = x_param[0];
  // doc["ki_x"] = x_param[1];
  // doc["kd_x"] = x_param[2];
  // doc["seuil_x"] = x_param[3];
  //doc["pos_x"] = x_param[4];
  doc["etat_robot"] = etat_robot;
  doc["commandeX"] = x_command;
  doc["commandeA"] = a_command;
  doc["commande"] = pwm_command;
  // Serialisation
  serializeJson(doc, Serial);
  // Envoit
  Serial.println();
}

void endPulse()
{
  /* Rappel du chronometre */
  motor_.setPWM(0);
  timerPulse_.disable();
  isInPulse_ = false;
}

void x_run()
{
  x_pid.run();
}
void startPulse()
{
  /* Demarrage d'un pulse */
  timerPulse_.setDelay(pulseTime_);
  timerPulse_.enable();
  timerPulse_.setRepetition(1);
  motor_.setPWM(pulsePWM_);
  shouldPulse_ = false;
  isInPulse_ = true;
}

double a_read()
{
  double qC, angle_x; //qC : angle du pendule -> angle Y du capteur
  imu_.getAngles(&angle_x, &qC, 2);
  return angle_x;
}

double x_read()
{
  return rangeSensor_.getRange();
}


void motor_command(double PWM)
{
  motor_.setPWM(PWM);
}

void init_main()
{
  Serial.begin(BAUD);

  // Initialisation imu
  imu_.init();

  // Chronometre envoie message
  timerSendMsg_.setDelay(UPDATE_PERIODE);
  timerSendMsg_.setCallback(sendSerial);
  timerSendMsg_.enable();

  // Chronometre duration pulse
  timerPulse_.setCallback(endPulse);
  ptr_motor_command = &motor_command;
  // ptr_x_run = &x_run;
}

void init_a_pid()
{
  ptr_a_read = &a_read;
  a_pid.setCommandFunc(ptr_motor_command);
  a_pid.setMeasurementFunc(ptr_a_read);
  a_pid.setPeriod(5);
  //a_pid.setIntegralLim(1);
  a_pid.enable();
}

void init_x_pid()
{
  ptr_x_read = &x_read;
  x_pid.setCommandFunc(ptr_motor_command);
  x_pid.setMeasurementFunc(ptr_x_read);
  x_pid.setPeriod(10);
  x_pid.enable();
}

double a_x_read()
{
  x_command = x_pid.returnCommand();
  return (a_param[4] - x_command);
}

void init_a_x_pid()
{
  ptr_a_x = &a_x_read;
  a_pid.setCommandFunc(ptr_motor_command);
  a_pid.setMeasurementFunc(ptr_a_x);
  a_pid.setPeriod(10);
  a_pid.enable();
}

/*
  doc["1/"] = 0;
  doc["1time"] = millis();
  doc["1angleX"] = angleX;
  doc["1sonar"] = rangeSensor_.getRange();
  doc["1error"] = error_;
  doc["1inPulse"] = isInPulse_;
  doc["2/"] = 0;
  doc["2kp_angle"] = a_param[0];
  doc["2ki_angle"] = a_param[1];
  doc["2kd_angle"] = a_param[2];
  doc["2seuil_angle"] = a_param[3];
  doc["2pos_angle"] = a_param[4];
  doc["3/"] = 0;
  doc["3kp_x"] = x_param[0];
  doc["3ki_x"] = x_param[1];
  doc["3kd_x"] = x_param[2];
  doc["3seuil_x"] = x_param[3];
  doc["3pos_x"] = x_param[4];
  */