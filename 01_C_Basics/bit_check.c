/*
============================================================
File:bit_check.c
Author:Marut Chanda
Description:Check Bit.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{   
  unsigned char reg = 8; //00001000
    if(reg & (1<<3)) //00001000
    {
        printf("Bit is On\n");
    }
else
{
    printf("Bit 3 is OFF\n");
}
return 0;
}
