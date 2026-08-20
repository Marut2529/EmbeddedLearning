
/*
============================================================
File:bit_clear.c
Author:Marut Chanda
Description:Basic clear bit.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
   unsigned char reg =0;
   //Set Bit 3
   reg |= (1<<3);//00001000
   printf("After Set Bit 3 = %d\n", reg); 

   //Clear Bit 3
   reg &=~(1<<3);  //11110111
   printf("After Clear Bit 3 = %d\n",reg);
   return 0;
}
