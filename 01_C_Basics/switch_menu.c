/*
============================================================
File:switch_menu.c
Author:Marut Chanda
Description:Learn about switc..case
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
    int menu=2;
    switch(menu)
    {
        case 1:
             printf("Coffee\n");
             break;

        case 2:
            printf("Tea\n");
            break;

        case 3:
             printf("Water\n");
             break;

        default:
            printf("Invalid Menu\n");
    }
return 0;
}
