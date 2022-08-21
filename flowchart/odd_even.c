#include<stdio.h>
int main()
{
  int a;
  printf("enter the no: ");
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("the given no %d is even\n",a);

  }
  else
  {
        printf("the given no %d is odd\n",a);

  }
  return 0;
}