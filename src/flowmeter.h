int X;
int Y;
float TIME = 0;
float FREQUENCY = 0;
float FLOW_RATE = 0;
float VOLUME = 0;
float LS = 0;

void initFlowmeter(){
    pinMode(A0, INPUT);
}

float calculateFlow(){
    X = pulseIn(A0, HIGH);
    Y = pulseIn(A0, LOW);
    TIME = X + Y;
    FREQUENCY = 1000000/TIME;
    FLOW_RATE = FREQUENCY/7.5;
    LS = FLOW_RATE/60;
    if(FREQUENCY >= 0)
    {
        if(isinf(FREQUENCY))
        {
            FLOW_RATE = 0;
            VOLUME = 0;
        }else{
            VOLUME = VOLUME + LS;
        }
    }
    return VOLUME;
}