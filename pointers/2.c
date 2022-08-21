// pointer derefrencing operator to print vlaues
#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    *q=*p;
     printf("the value of a=%d\na=%d\na=%d\n",a,*p,*q);
  return 0;
}