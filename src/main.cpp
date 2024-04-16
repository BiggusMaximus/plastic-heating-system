#include <Arduino.h>
#include "parameter.h"
#include "display.h"
#include "steppers.h"
#include "scanner.h"
#include "heater.h"
#include "servos.h"
#include "temperature.h"
#include "flowmeter.h"
#include "pump.h"

void setup() {
  Serial.begin(115200);
  steppersInit();  
  lcdInit();
  initFlowmeter();
  heaterInit();
  pumpInit();
  servoInit();
}

void loop() {
  // float *temperatureData = read_temperatures();
  showDisplay(55.2, 45.3, temperatureStatus, workingStatus);

  // if ((temperatureData[0] > HORIZONTAL_HEATER_TEMPERATURE) and ((temperatureData[1] > VERTICAL_HEATER_TEMPERATURE))){
  // if (temperatureData[0] > -5){
  temperatureStatus = "Ready";
  moveStepper();
  showDisplay(45.2, 35.8, temperatureStatus, workingStatus);
  moveServo();
  showDisplay(36.2, 34.3, temperatureStatus, workingStatus);

  turnOffPump();
  showDisplay(45.3, 51.2, temperatureStatus, workingStatus);


  // }else{
  //   temperatureStatus = "Not Ready";
  //   turnOnHeater();
  // } 

  // temperatureData[2] = {};
}

   