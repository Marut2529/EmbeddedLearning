/*
============================================================
File:temperature_log.c
Author:Marut Chanda
Description:learn how to use for loop to show temperature.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
int temp=25;
for(int i=1;i<=10;i++)
{
    printf("Reading %d :%d C\n",i,temp);
}
return 0;
}

