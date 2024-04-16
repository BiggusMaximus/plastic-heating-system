#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 200;

// Create Instance of Stepper library
Stepper Stepper1(stepsPerRevolution, 25, 26, 27, 28);
Stepper Stepper2(stepsPerRevolution, 29, 30, 31, 32);


void steppersInit()
{
	// set the speed at 60 rpm:
	Stepper1.setSpeed(STEPPER1_RPM);
	Stepper2.setSpeed(STEPPER2_RPM);
}

int angle2step(float angle){
    return (angle/1.8);
}

void moveStepper() 
{
    workingStatus = "Inserting new unit..";
    Stepper1.step(angle2step(STEPPER1_ANGLE));
    Stepper2.step(angle2step(STEPPER2_ANGLE));
    delay(500);
    workingStatus = "Inserting finish";
    Stepper1.step(-angle2step(STEPPER1_ANGLE));
    Stepper2.step(-angle2step(STEPPER2_ANGLE));
}

void testStepper(int angle1, int angle2) 
{
    Stepper1.step(angle2step(angle1));
    Stepper2.step(angle2step(angle2));
    
}