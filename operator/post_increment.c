#include<stdio.h>
int main()
{
 int a,b;
 printf("enter a number: ");
 scanf("%d",&a);
 b=a++;
 printf("the no after post increment is %d",b);
  return 0;
}