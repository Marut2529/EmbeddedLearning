/*
============================================================
File:temperature.c
Author:Marut Chanda
Description:learn how to use function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int read_temperature(void)
{
    return 25;
}
int main(void)
{
    int temperature;
    temperature= read_temperature();
    printf("Temperature = %d C\n",temperature);
return 0;
}
