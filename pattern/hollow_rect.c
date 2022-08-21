#include<stdio.h>
int main()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  int i=1;
  while(i<=a)
  {
    int j=1;
    while(j<a)
    {
        if(i==1||i==a||j==1||j==a-1)
        printf("*");
        else
        printf(" ");
        j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}