/*
============================================================
File:battery_function.c
Author:Marut Chanda
Description:learn how to use function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void battery_status(int battery)
{ if(battery>=80&&battery<=100)
{
    printf("Excellent\n");
}
else if(battery>=50&&battery<=79)
{
    printf("Good\n");
}
else if(battery>=20&&battery<=49)
{
    printf("LOW\n");
}
else
{
    printf("Critical\n");
}
return 0;
}
int main(void)
{
    battery_status(109);
    battery_status(100);
    battery_status(95);
    battery_status(77);
    battery_status(42);
    battery_status(25);
    return 0;
}
