/*
============================================================
File:temperature_sensor.c
Author:Marut Chanda
Description:Read temperature from Temperature Sensor.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
    int read_temperature(void)
    {
        int temperature=25;
        return temperature;
    }
int main(void)
{
    int temperature;
    temperature = read_temperature();
    printf("Temperature = %d C\n", temperature);
    return 0;
}
