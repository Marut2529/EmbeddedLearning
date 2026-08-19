
/*
============================================================
File:sensor_array_struct.c
Author:Marut Chanda
Description:Store and display multiple sensor data using array of struct.
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
    struct Sensor sensor[3];
    
    sensor[0].temperature=25;
    sensor[0].humidity=60;

    sensor[1].temperature=30;
    sensor[1].humidity=70;

    sensor[2].temperature=28;
    sensor[2].humidity=65;

for(int i=0;i<3;i++)
{
    printf("Sensor %d: Temperature = %d C , Humidity = %d %%\n",i+1,sensor[i].temperature,sensor[i].humidity);
   
}
 return 0;
}
