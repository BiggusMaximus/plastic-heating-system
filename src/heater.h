#define PWM1 5
#define RPWM1 6
#define LPWM1 7
#define PWM2 8
#define RPWM2 9
#define LPWM2 10


void turnOnHeater(){
    analogWrite(PWM1, VERTICAL_HEATER_TEMPERATURE);
    digitalWrite(LPWM1, HIGH);
    digitalWrite(RPWM1, HIGH);
    analogWrite(PWM2, HORIZONTAL_HEATER_TEMPERATURE);
    digitalWrite(LPWM2, HIGH);
    digitalWrite(RPWM2, HIGH);
}

void turnOffHeater(){
    analogWrite(PWM1, 0);
    digitalWrite(LPWM1, LOW);
    digitalWrite(RPWM1, LOW);

    analogWrite(PWM2, 0);
    digitalWrite(LPWM2, LOW);
    digitalWrite(RPWM2, LOW);
}
void heaterInit(){
    pinMode(PWM1, OUTPUT);
    pinMode(RPWM1, OUTPUT);
    pinMode(LPWM1, OUTPUT);
    pinMode(PWM2, OUTPUT);
    pinMode(RPWM2, OUTPUT);
    pinMode(LPWM2, OUTPUT);
    turnOnHeater();
}
