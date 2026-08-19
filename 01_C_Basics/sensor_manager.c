

/*
============================================================
File:sensor_manager.c
Author:Marut Chanda
Description:Display sensor data using function and pointer to struct.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
struct Sensor
{
    int temperature;
    int humidity;
};

void print_sensor(struct Sensor *sensor)
{
    for(int i=0;i<3;i++){
    printf("Sensor %d\n",i+1);
    printf("Temperature = %d C\n",sensor[i].temperature);
    printf("Humidity = %d %%\n",sensor[i].humidity);
    }

}
int main()
{
    struct Sensor sensor[3];

    sensor[0].temperature=25;
    sensor[0].humidity =60;

    sensor[1].temperature=30;
    sensor[1].humidity =70;

    sensor[2].temperature=28;
    sensor[2].humidity =65;
  print_sensor(sensor);
   return 0;
 
}
