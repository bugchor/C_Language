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
    while(j<=a)
    {
        if(j<=a-i)
        printf(" ");
        else
        printf("*");

        j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}