/*
============================================================
File:uart_command.c
Author:Marut Chanda
Description:Learn about switch..case
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
    char cmd='R';
    switch(cmd)
    {
        case'R':
        printf("Motor Right\n");
        break;

        case 'L':
        printf("Motor Left\n");
        break;

        case 'S':
        printf("STOP\n");
        break;

        case 'F':
        printf("Forward\n");
        break;

        case 'B':
        printf("Backward\n");
        break;

        default:
        printf("Try again\n");

    }
return 0;

}
