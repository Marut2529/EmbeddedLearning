
/*
============================================================
File:pointer_max.c
Author:Marut Chanda
Description:Find maximum temperature.
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

int main()
{
 int temp[5]={22,29,25,31,27};
 int max;
 find_max(temp, 5,&max);
printf("Maximum = %d C\n", max);
return 0;
}
