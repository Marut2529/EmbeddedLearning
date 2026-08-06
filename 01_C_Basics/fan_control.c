//Assignment3
#include<stdio.h>
int main(void)
{
int temp=79;
if(temp<40)
{
    printf("Fan OFF\n");
}
else if(temp>=40&&temp<=59)
{
    printf("Fan LOW\n");
}
else if(temp>=60&&temp<=79)
{
    printf("Fan MEDIUM\n");
}
else
{
    printf("Fan HIGH\n");
}
return 0;
}
