#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the first and second no: ");
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
  {
    int j;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            break;;
        }
    }
      if(j==i)
    {
    printf("the no is %d\n",j);
    }
  }

  return 0;
}