/*
============================================================
File:remote_control.c
Author:Marut Chanda
Description:Learn about switch..case
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
int button=2;
    switch (button)
    {
        case 1:
        printf("Turn TV On\n");
        break;

        case 2:
        printf("Turn TV Off\n");
        break;

        case 3:
        printf("Volume +\n");
        break;

        case 4:
        printf("Volume -\n");
        break;

        default:
        printf("Try again\n");
    }
return 0;
}
