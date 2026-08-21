
/*
============================================================
File:volatile_demo.c
Author:Marut Chanda
Description:Basic demonstration of volatile variable.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    volatile unsigned char GPIO = 0;
    GPIO |= (1<<3);
    printf("GPIO = %d\n",GPIO);
    return 0;
    
}
