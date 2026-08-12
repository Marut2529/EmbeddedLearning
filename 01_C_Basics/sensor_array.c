

/*
============================================================
File:sensor_array.c
Author:Marut Chanda
Description:Basic Array Example.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
    int temperature[10]={22,24,23,25,27,29,28,26,24,23};
    for(int i=0;i<10;i++){
        printf("Temperature[%d] = %d C\n",i,temperature[i]);
    
    }
return 0;
}
