#include<stdio.h>
int main()
{
  int a,b;
  printf("enter two number: ");
  scanf("%d %d",&a,&b);
  int max,min;
  if(a>b)
  {
    max=a;
    min=b;
  }
  else
  {
    max=b;
    min=a;
  }
  printf("max %d\nmin %d",max,min);
  return 0;
}