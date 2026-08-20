
/*
============================================================
File:bit_toggle.c
Author:Marut Chanda
Description:Toggle Bit.
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main()
{ unsigned char reg = 0; //00000000
  reg ^=(1<<3); //00001000
  printf("After Toggle 1 = %d\n",reg);
  reg ^=(1<<3); 
  printf("After Toggle 2 = %d\n",reg);
  return 0;
  
}
