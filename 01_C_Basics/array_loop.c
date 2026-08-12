
/*
============================================================
File:array_loop.c
Author:Marut Chanda
Description:Basic Array Example.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
    int temperature[5]={25,27,26,30,26};
    for(int i=0;i<5;i++)
    {
        printf("Temperature[%d] = %d C\n", i, temperature[i]);
    }
    return 0;
}
