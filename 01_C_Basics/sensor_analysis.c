// write your code here
/*
============================================================
File:sensor_analysis.c
Author:Marut Chanda
Description:Find Max and Min temperature by using 2 function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int find_max(int temp[], int seize) // Max Temp function
{
    int max=temp[0];
    for(int i=1; i<seize; i++)
    {
        if(temp[i]>max)
        {
            max=temp[i];
        }
    }
    return max;
}
int find_min(int temp[], int seize) // Min Temp functin
{
    int min=temp[0];
    for(int i=1; i<seize; i++)
    {
        if(temp[i]<min)
        {
            min=temp[i];
        }
    }
    return min;
}

int main()
{
int max,min;
int seize;
int temp[10]={22,24,23,25,27,29,28,26,24,23};
max=find_max(temp,10);
min=find_min(temp,10);
printf("Max temperature is:%d C\n",max);
printf("Min temperature is:%d C\n",min);
return 0;
}
