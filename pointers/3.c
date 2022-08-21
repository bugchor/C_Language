//  pointers to pointers
#include<stdio.h>
int main()
{
     int a;
    int *p,**q,***r;
    printf("enter the value of a \n");
    scanf("%d",&a);
    p=&a;
    q=&p;
    r=&q;
     printf("the value of a=%d\na=%d\na=%d\na=%d\n",a,*p,**q,***r);
     printf("the address of a=%u\na=%u\np=%u\nq=%u\n",&a,p,q,r);
     printf("address of p=%u\nq=%u\n",&p,&q);
  return 0;
}