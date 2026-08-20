

/*
============================================================
File:bit_shift.c
Author:Marut Chanda
Description:Basic bit shift.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    unsigned char value= 1; //00000001
    unsigned char result = value << 3;//00001000
    printf("Result = %d\n", result);
    return 0;
}
