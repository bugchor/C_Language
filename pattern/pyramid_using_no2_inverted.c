#include<stdio.h>
int main()
{
  int a;
  printf("enter the number: ");
  scanf("%d",&a);
  int i=1;
  while(i<=a)
  {
    int j=1;
    while(j<=a-i+1)
    {
        printf("%d ",i);
        j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}