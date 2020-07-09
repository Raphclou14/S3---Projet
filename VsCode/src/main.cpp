#include "init_main.h"

void setup() {
  init_main();
  init_a_pid();
  init_x_pid();
}

void loop() {

  a_pid.run();
  x_pid.run();
  
  if(shouldRead_){
    readSerial();
  }
  if(shouldPulse_){
    startPulse();
  }
  timerSendMsg_.update();
  timerPulse_.update();

  a_pid.setGains(a_param[0],a_param[1],a_param[2]);
  a_pid.setEpsilon(a_param[3]);
  a_pid.setGoal(a_param[4]);

  x_pid.setGains(x_param[0],x_param[1],x_param[2]);
  x_pid.setEpsilon(x_param[3]);
  x_pid.setGoal(x_param[4]);

  
}

