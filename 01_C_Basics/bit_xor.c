
/*
============================================================
File:bit_xor.c
Author:Marut Chanda
Description:Basic bitwise XOR operation.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    unsigned char a = 5; //00000101
    unsigned char b = 3; //00000011
    unsigned char result= a^b;
printf("Result = %d\n",result);
return 0;
}
