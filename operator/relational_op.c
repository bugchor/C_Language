#include<stdio.h>
int main()
{
int a;
printf("enter the no");
scanf("%d",&a);
if(a==10)
{
    printf("the no is equal to 10");
}
else if(a>10)
{
    printf("the no is greater than 10");
}
else
    printf("the no is less than 10");

  return 0;
}