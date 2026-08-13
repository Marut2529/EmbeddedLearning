/*
============================================================
File:min_temperature.c
Author:Marut Chanda
Description:find minimum temperature from sensor array.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    int temp[10]={22,24,23,25,27,29,28,26,24,23};
    int min=temp[0];
    for(int i=1;i<10;i++){
        if(temp[i]<min){
            min=temp[i];
        }
    }
    printf("Minimum Temperature is %d  C\n",min);
    return 0;

}

