
/*
============================================================
File:find_Max_Temperature.c
Author:Marut Chanda
Description:Basic Array Example
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
    int temp[]={22,24,23,25,27,29,28,26,24,23};
    int max=temp[0];
    
    for(int i=1;i<10;i++)
    {
        if(temp[i]>max){
            max=temp[i];
        }
    }
printf("Maximum Temperature is: %d C\n",max);
return 0;
}

