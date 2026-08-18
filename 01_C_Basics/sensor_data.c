/*
============================================================
File:sensor_data.c
Author:Marut Chanda
Description:Find Max, Min and average of temperature.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void find_max(int temp[], int size, int *max)
{
    *max=temp[0];
    for(int i=1;i<size;i++)
    {
        if(temp[i]>*max)
        {
            *max=temp[i];
        }
    }

}
void find_min(int temp[], int size, int *min)
{
    *min=temp[0];
    for(int i=1;i<size;i++)
    {
        if(temp[i]<*min)
        {
            *min=temp[i];
        }
    }
}
void calculate_average(int temp[],int size, float *average)
{
    int sum=0;
    float *averate;
    for(int i=0;i<size;i++)
    {
        sum=temp[i]+sum;
    }
    *average=(float)sum/size;
}

int main()
{
    int max;
    int min;
    float average;
 int temp[10]={22,24,23,25,27,29,28,26,24,23};
find_max(temp,10,&max);
find_min(temp,10,&min);
calculate_average(temp,10,&average);

printf("Max Temp= %d C\n",max);
printf("Min Temp= %d C\n",min);
printf("Average Temp= %.2f C\n",average);
return 0;

}
