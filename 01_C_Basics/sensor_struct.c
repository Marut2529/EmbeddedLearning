
/*
============================================================
File:sensor_struct.c
Author:Marut Chanda
Description:Find Max, Min and average of temperature.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
struct Sensor
{
    int temperature;
    int humidity;
};
int main()
{
    struct Sensor sensor1;
    struct Sensor sensor2;
    
    sensor1.temperature= 25;
    sensor1.humidity=60;
    
    sensor2.temperature=30;
    sensor2.humidity=70;
    
    printf("Sensor 1\n");
    printf("Temperature = %d C\n",sensor1.temperature);
    printf("Humidity = %d %%\n",sensor1.humidity);
    printf("Sensor 2\n");
    printf("Temperature = %d C\n",sensor2.temperature);
    printf("Humidity = %d %%\n",sensor2.humidity);
 return 0;

}
