#include<stdio.h>
int main()
{
  int a,sum=0;
  printf("enter the no: ");
  scanf("%d",&a);
  while(a>0)
  {
    sum+=a;
     printf("enter the no: ");
     scanf("%d",&a);

  }
  printf("the sum is = %d",sum);
  return 0;
}