#include "max6675.h"

// CLK, CS, SO
MAX6675 thermocouple1(35, 36, 37);
MAX6675 thermocouple2(38, 39, 40);

float *read_temperatures()
{
    static float data[2] = 
    {
        thermocouple1.readCelsius(),
        thermocouple2.readCelsius()
    };
    return data;
}