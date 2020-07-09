#ifndef LMotorController_h
#define LMotorController_h


#include "Arduino.h"


class Motor
{
protected:
    int _pwmA, _in1_A, _in2_A, _pwmB, _in1_B, _in2_B,_stby_pin;
    int _currentSpeed;
    double _motorAConst, _motorBConst;
public:
    Motor(int pwmA, int in1_A, int in2_A, int pwmB, int in1_B, int in2_B,int stby_pin);
    //void move(int leftSpeed, int rightSpeed, int minAbsSpeed);
    void move(float speed);
    //void move(int speed, int minAbsSpeed);
    //void turnLeft(int speed, bool kick);
    //void turnRight(int speed, bool kick);
    void stop();
};


#endif