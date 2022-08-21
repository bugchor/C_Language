#include<stdio.h>
int main()
{
int a;
printf("enter the no");
scanf("%d",&a);
if(a%2==0 && a%3==0)
{
    printf("the no is divisible by both 2 and 3");
}
else if(a%2==0 || a%3==0)
{
    printf("the no is divisible by either 2 or 3");
}
else
    printf("the no is not divisible by 2 or 3");

  return 0;
}