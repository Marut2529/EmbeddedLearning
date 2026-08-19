

/*
============================================================
File:function_struct.c
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
void  print_sensor(struct Sensor *sensor)
{
printf("Temperature = %d C\n", sensor->temperature);
printf("Humidity = %d %%\n", sensor->humidity);
}
 int main()
 {
    struct Sensor sensor1;

    sensor1.temperature = 25;
    sensor1.humidity = 60;

print_sensor(&sensor1);
 return 0;
 }
