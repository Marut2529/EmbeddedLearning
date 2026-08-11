/*
============================================================
File:led_function.c
Author:Marut Chanda
Description:learn how to use function.
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
