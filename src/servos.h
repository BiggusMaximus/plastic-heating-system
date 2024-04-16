#include <Servo.h>

Servo servoVertical;
Servo servoHorizontal;

void servoInit(){
    servoVertical.attach(3);
    servoHorizontal.attach(4);
}

void moveServo(){
    workingStatus = "Sealing...";
    servoVertical.write(SERVO_VERTICAL_ANGLE);
    servoHorizontal.write(SERVO_HORIZONTAL_ANGLE);
    delay(500);
    workingStatus = "Sealing done";
    servoVertical.write(-SERVO_VERTICAL_ANGLE);
    servoHorizontal.write(-SERVO_HORIZONTAL_ANGLE);
}