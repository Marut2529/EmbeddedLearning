/*
============================================================
File:pointer_sensor.c
Author:Marut Chanda
Description:pointer+ sensor.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void set_temperature(int *temp, int new_temperature)
{
*temp=new_temperature;
}

int main(){
int temperature =25;
printf("Before = %d C\n",temperature);
set_temperature(&temperature,35);
printf("After = %d C\n",temperature);
return 0;
}
