#include<stdio.h>
int main()
{
  int a;
  printf("enter number to find multiplication: ");
  scanf("%d",&a);
  int i=1;
  while (i<=10)
  {
    printf("%d X %d = %d\n",i,a,i*a);
    i++;
  }
  
  return 0;
}