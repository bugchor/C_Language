#include<stdio.h>
int main()
{
  int a,sum=0;
  printf("enter the no: ");
  scanf("%d",&a);
  while(a%2==0)
  {
    sum+=a;
  printf("enter the no: ");
  scanf("%d",&a);
  }
  printf("sum is = %d",sum);
  return 0;
}

