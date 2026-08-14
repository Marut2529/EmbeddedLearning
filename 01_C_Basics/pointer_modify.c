
/*
============================================================
File:pointer_modify.c
Author:Marut Chanda
Description:Modify variable using pointer.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{
 int value=50;
 int *ptr=&value;

 printf("Initial Value= %d\n",value);
 *ptr=150;
 printf("New value= %d\n",value);
 return 0;
}
