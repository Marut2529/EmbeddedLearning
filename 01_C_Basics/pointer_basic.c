
/*
============================================================
File:pointer_basic.c
Author:Marut Chanda
Description:Poiter basic example.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
int value=100;
int*ptr=&value;
printf("Value = %d\n",value);
printf("Value through pointer = %d\n",*ptr);
printf("Address =%p\n",(void*)&value);
return 0;
}
