/*
============================================================
File:fan_function.c
Author:Marut Chanda
Description:learn how to use function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void fan_control(int temperature)
{
    if(temperature<30)
    {
        printf("Fan OFF\n");
    }
    else if(temperature<60)
    {
        printf("Fan LOW\n");
    }
    else if(temperature<80)
    {
        printf("Fan Medium\n");
    }
    else
    {
        printf("Fan High\n");
    }
}
int main (void)
{
    int temperature=200;
    fan_control(temperature);
    return 0;
}
