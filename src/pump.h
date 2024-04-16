#define IN1 41
#define IN2 42

void pumpInit(){
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
}

void turnOnPump(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    workingStatus = "Inserting fluid..";
}

void turnOffPump(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
}