/*
============================================================
File:embedded_system.c
Author:Marut Chanda
Description:learn how to use function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int read_temperature(void)
{
    int temperature=25;
    return temperature;
}
void battery_status(int battery)
{
    if(battery>=0&&battery<=49)
    {
        printf("Battery LOW\n");
    }
    else if(battery>=50&&battery<=79)
    {
        printf("Batery Medium\n");
    }
    else{
        printf("Battery HIGH\n");
    }
}
void fan_control(int temperature)
{
    if(temperature>=0&&temperature<=15)
    {
        printf("Fan speed: LOW\n");
    }
    else if(temperature>=16&&temperature<=39)
    {
        printf("Fan speed:Medium\n");
    }
    else
    {
        printf("Fan speed:High\n");
    }
}
int main(void)
{
int temperature;
int battery;
temperature=read_temperature();
battery=75;
printf("Temperature = %d C\n",temperature);
battery_status(battery);
fan_control(temperature);
return 0;

}
