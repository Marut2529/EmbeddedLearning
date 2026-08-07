/*
============================================================
File:trffic_light.c
Author:Marut Chanda
Description:Learn about switc..case
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
    int light=1;
    switch(light)
    {
        case 1:
        printf("RED\n");
        break;

        case 2:
        printf("YELLOW\n");
        break;

        case 3:
        printf("GREEN\n");
        break;

        default:
        printf("Please try again\n");
       
    }
return 0;
}
