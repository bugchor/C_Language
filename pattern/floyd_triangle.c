#include<stdio.h>
int main()
{
  int a;
  printf("enter the number: ");
  scanf("%d",&a);
  int i=1;
  int r=1;
  while(i<=a)
  {
    int j=1;
    while(j<=i)
    {
        printf("%d ",r);
        r++;
        j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}