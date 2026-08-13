
/*
============================================================
File:average_function.c
Author:Marut Chanda
Description:find average temperature from sensor array and function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
float calculate_average(int temp[], int size)
{
    int sum=0;
    for(int i =0; i<size; i++)
    {
        sum=sum+temp[i];
    }
return (float)sum/size;
}

int main()
{
   int temp[10]={22,24,23,25,27,29,28,26,24,23};
   float average;
   average=calculate_average(temp,10);
   printf("Average Temperature is: %.1f C\n",average);

}
