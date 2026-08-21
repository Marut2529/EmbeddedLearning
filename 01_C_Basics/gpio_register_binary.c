
/*
============================================================
File:gpio_register_binary.c
Author:Marut Chanda
Description:Display an 8-bit GPIO register in binary format and demonstrate Set,Clear Toggle and Check Bit operations.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void print_binary(unsigned char value)
{
for(int i = 7; i >=0; i--)
{
printf("%d", (value>> i) & 1);
}
}


int main()
{
    unsigned char GPIO = 0;

    print_binary(GPIO); //00000000
    printf("\n");

    GPIO |=(1<<3);
    print_binary(GPIO); //00001000
    printf("\n");

    GPIO |=(1<<5);
    print_binary(GPIO); //00101000
    printf("\n");

    GPIO &=~(1<<3);
    print_binary(GPIO); //00100000
    printf("\n");

    GPIO ^=(1<<5);
    print_binary(GPIO); //00000000
    printf("\n");
    return 0;
}

