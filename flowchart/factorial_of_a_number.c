#include<stdio.h>
int main()
{
  int a,fact=1;
  printf("enter the number: ");
  scanf("%d",&a);
  int i=1;
  while(i<=a)
  {
    fact*=i;
    i++;
  }
  printf("factorial of %d is %d\n",a,fact);
  return 0;
}