/*
============================================================
File:Vending_mechine.c
Author:Marut Chanda
Description:Learn about use Logical Operator
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void)
{
int money=25;
if(money>=50)
{
    printf("coffee\n");
}
else if(money>=30&&money<=49)
{
    printf("Tea\n");
}
else if(money>=20&&money<=29)
{
    printf("Water\n");
}
else{
    printf("not enough money\n");
}
return 0;
}
