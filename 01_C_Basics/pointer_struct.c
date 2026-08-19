
/*
============================================================
File:pointer_struct.c
Author:Marut Chanda
Description:Access sensor data using pointer to struct.
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

sensor1.temperature =25;
sensor1.humidity =60;

struct Sensor *ptr=&sensor1;

printf("Temperature =%d C\n",ptr->temperature);
printf("Hunidity = %d %%\n",ptr->humidity);
return 0;

}
