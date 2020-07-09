#include "Motor.h"
#include "Arduino.h"


Motor::Motor(int pwmA, int in1_A, int in2_A, int pwmB, int in1_B, int in2_B, int stby_pin){
    _stby_pin = stby_pin;
    digitalWrite(_stby_pin,HIGH);  
    //Parametre de la sortie A du controlleur de moteur
	_pwmA  = pwmA;
    _in1_A = in1_A;
    _in2_A = in2_A;
	pinMode(_pwmA, OUTPUT);
	pinMode(_in1_A, OUTPUT);
	pinMode(_in2_A, OUTPUT);

    //Parametre de la sortie A du controlleur de moteur
    _pwmB  = pwmB;
    _in1_B = in1_B;
    _in2_B = in2_B;
	pinMode(_pwmB, OUTPUT);
	pinMode(_in1_B, OUTPUT);
	pinMode(_in2_B, OUTPUT);
}

void Motor::move(float speed)
{
    if (speed == _currentSpeed) return;
    
    if (speed > 255.0) speed = 255.0;
    else if (speed < -255.0) speed = -255.0;

    if(speed>0.0){
        digitalWrite(_in1_A,HIGH);
        digitalWrite(_in2_A,LOW);
        digitalWrite(_in1_B,HIGH);
        digitalWrite(_in2_B,LOW);
    }
    else{
        digitalWrite(_in1_A,LOW);
        digitalWrite(_in2_A,HIGH);
        digitalWrite(_in1_B,LOW);
        digitalWrite(_in2_B,HIGH);
    }
    
    analogWrite(_pwmA, abs(speed));
    analogWrite(_pwmB, abs(speed));
    
    _currentSpeed = speed;
}

void Motor::stop()
{
    digitalWrite(_in1_A, LOW);
    digitalWrite(_in2_A, LOW);
    digitalWrite(_in1_B, LOW);
    digitalWrite(_in2_B, LOW);
    digitalWrite(_pwmA, HIGH);
    digitalWrite(_pwmB, HIGH);
    
    _currentSpeed = 0;
}