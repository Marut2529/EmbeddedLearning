/*
============================================================
File:function_return.c
Author:Marut Chanda
Description:learn how to use function.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main(void)
{
    int result;
    result=add(10,20);
    printf("Result=%d\n",result);
    return 0;

}
