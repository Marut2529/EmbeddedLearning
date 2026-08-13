/*
============================================================
File:average_temperature.c
Author:Marut Chanda
Description:find average temperature from sensor array.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    int temp[10]={22,24,23,25,27,29,28,26,24,23};
    int sum=0;
    float average;
    for(int i=0;i<10;i++)
    {
        sum=sum+temp[i];
    }
    average=(float)sum/10;
    printf("Average Temperature is: %.1f\n",average);
return 0;
}
