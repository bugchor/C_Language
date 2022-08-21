//to check the given no is prime or not
#include<stdio.h>
int main()
{
  int a;
  printf("enter the no: ");
  scanf("%d",&a);
  int i=2;
  while(i<a)
  {
    if(a%i==0)
    {
        printf("the given no %d is not prime\n",a);
       break;
    }
    i++;
  }
  if(i==a)
  {
    printf("the given no %D is prime\n",a);
  }
  return 0;
}