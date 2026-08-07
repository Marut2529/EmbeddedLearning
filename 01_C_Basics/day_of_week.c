/*
============================================================
File:day_of_week.c
Author:Marut Chanda
Description:Learn about switch..case
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
int day=4;
    switch(day)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Satturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        default:
        printf("Try again\n");

    }
    return 0;
    }

