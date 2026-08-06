
//Assignment1
#include<stdio.h>
int main(void)
{
int battery=55;
if(battery>=80&&battery<=100)
{
printf("Excellent\n");
}
else if(battery<=79&&battery>=50)
{
printf("Good\n");
}
else if(battery<=49&&battery>=20)
{
printf("LOW\n");
}
else if(battery<=19&&battery>=0)
{
printf("Critical\n");
}
else
{
printf("Wrong number try afgain!\n");
}
}
