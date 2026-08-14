
/*
============================================================
File:pointer_function.c
Author:Marut Chanda
Description:function and pointer
Created: Aug 2026
============================================================
*/
#include<stdio.h>
void increase_temperature(int *temp)
{
    *temp=30;
}
int main()
{
    int temp=25;
    printf("Before = %d C\n",temp);
    increase_temperature(&temp);
    printf("After = %d C\n",temp);
return 0;

}
