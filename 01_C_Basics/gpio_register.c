
/*
============================================================
File:gpio_register.c
Author:Marut Chanda
Description:using SET BIT, CLEAR BIT, TOGGLE,CHECK.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{   
    unsigned char GPIO = 0; //00000000
    printf("Initial GPIO = %d\n",GPIO);

    GPIO |= (1<<3); //00001000
    printf("After Set Bit 3 = %d \n",GPIO);

    GPIO |= (1<<5); //00101000
    printf("After Set Bit 5 = %d \n",GPIO);

    if(GPIO&(1<<3)){ 
    printf(" Bit 3 is ON\n"); //00101000
}
else
{
    printf(" Bit 3 is OFF\n");
}
    GPIO &=~(1<<3); //00101000
    printf("After Clear Bit 3 = %d\n ",GPIO); //00100000

    GPIO ^=(1<<5); //00100000
    printf("After Toggle Bit 5 = %d\n ",GPIO);
return 0;
}
