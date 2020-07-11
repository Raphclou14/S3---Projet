#include "init_main.h"
double a_cst, x_cst;

void etat1();
void etat2();
void read();

void setup()
{
  init_main();
  //init_a_pid();
  init_x_pid();
  // init_a_x_pid();
  ptr_a_x = &a_x_read;
  init_a_pid();
  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
}

void loop()
{
  switch (etat_robot)
  {
  case 1:
    a_pid.run();
    read();
    break;
  case 2:
    x_command = x_pid.returnCommand();
    a_param[4] = 0 - x_command;
    a_pid.setGoal(a_param[4]);
    a_pid.run();
    read();
    break;

  default:

    break;
  }
}

void read()
{
  if (shouldRead_)
  {
    readSerial();
  }

  timerSendMsg_.update();
  timerPulse_.update();

  //Assignation des différents paramètres de l'angle au pid de l'angle
  a_pid.setGains(a_param[0], a_param[1], a_param[2]);
  a_pid.setEpsilon(a_param[3]);
  a_pid.setGoal(a_param[4]);

  //Assignation des différents paramètres de la position au pid de la position
  x_pid.setGains(x_param[0], x_param[1], x_param[2]);
  x_pid.setEpsilon(x_param[3]);
  x_pid.setGoal(x_param[4]);
}

/*void etat1()
{ //on veut uniquement que le robot se stabilise, donc a_pid.run()
  a_pid.run();

  read();
}
*/
/*void etat2()
{
  a_param[4] = -4; //inclinaision du robot pour avance
  read();

  x_command = x_pid.returnCommand();
  pwm_command = (a_command * a_cst) + (x_command * x_cst);
  motor_command(pwm_command);
  
}*/

/*
void etat2()
{
  /*double x_cst = 0.3, a_cst = (1 - x_cst), pwm_command;

  while (x_pid.isAtGoal() == false) //si le pid de la position n'a pas atteint l'objectif
  {
    pwm_command = a_pid.returnCommand() * a_cst + x_pid.returnCommand() * x_cst;
    motor_command(pwm_command);
    read();
    if ((read()) == 1)
    {
      break;
    }
  }
  
  etat_robot = 1;
  read();
}*/

/*
 if (x_param[4] != 0)
  {              //Si la position demande n'est pas nulle, alors le facteur du pid de la position != 0
    x_cst = 0.3; //valeur a change pour que ca fonctionne mieux
    a_cst = 1 - x_cst;
  }
  else
  {
    x_cst = 0;         //On ignore la commande du pid de la position
    a_cst = 1 - x_cst; //100% de la commande du pid de l'angle est utilisee
  }
  pwm_command = calcul_command(a_pid.returnCommand(), x_pid.returnCommand());
  motor_command(pwm_command);*/

/*

  CHOSE QUE JAI FAIT
  -code avec led pour visualiser letat du robot
  -fonction pour l'etat 1 -> stabilisation du robot
  */