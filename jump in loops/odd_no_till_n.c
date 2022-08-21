#include<stdio.h>
int main()
{
 int a;
 printf("enter the n: ");
 scanf("%d",&a);
for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            continue;
        }
       printf("the no are%d\n",i);
    }
  return 0;
}