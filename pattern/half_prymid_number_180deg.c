#include<stdio.h>
int main()
{
  int a;
  printf("enter the number: ");
  scanf("%d",&a);
  int i=a;
  while(i>=1)
  {
    int j=1;
    while(j<=i)
    {
        printf("%d ",j);
        j++;
    }
    printf("\n");
    i--;
  }
  return 0;
}