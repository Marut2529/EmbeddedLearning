/*
============================================================
File:grade.c
Author:Marut Chanda
Description:Determine student grade using if-else..if
Created: Aug 2026
============================================================
*/
#include<stdio.h>
int main(void){
int score = 90;
if(score>=90)
{
    printf("Grade A\n");
}
else if(score>=80)
{
    printf("Grade B\n");
}
else if(score>=70)
{
    printf("Grade C\n");
}
else if(score>=60)
{
    printf("Grade D\n");
}
else
{
    printf("Grade F\n");
}
return 0;
}
