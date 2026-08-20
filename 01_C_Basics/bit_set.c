
/*
============================================================
File:bit_set.c
Author:Marut Chanda
Description:Basic set bit.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    unsigned char reg=0; //00000000
    reg = reg|(1<<3);    //00001000
    printf("Register = %d\n",reg);
    return 0;

}
