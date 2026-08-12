/*
============================================================
File:motor_control.c
Author:Marut Chanda
Description:Controls speed Motor.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void motor_control(int speed)
{
    if(speed==0)
    {
        printf("MOto OFF\n");
    }
    else if(speed>=1&&speed<=30)
    {
        printf("Motor LOW\n");
    }
    else if(speed>=31&&speed<=70)
    {
        printf("Motor Medium\n");
    }
    else
    {
        printf("Motor HIGH\n");
    }
}
int main (void)
{
motor_control(0);
motor_control(25);
motor_control(50);
motor_control(90);
return 0;
}
