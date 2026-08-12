/*
============================================================
File:led_function.c
Author:Marut Chanda
Description:Turn LED ON and OFF.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void led_control(int state)
{
    if(state==1)
    {
        printf("LED ON\n");
    }
    else
    {
        printf("LED OFF\n");
    }
}
int main (void)
{
led_control(1);
led_control(0);
}
