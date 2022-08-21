//defination of pointers in c
//pointers 
#include<stdio.h>
int main()
{
    int a,b,c,d;
    int *p,*q;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*q;
    d=*p;
    printf("the value of a=%d and b=%d\n",a,b);
    printf("the value of a=%d and b=%d\n",*p,*q);
    printf("the value of a=%d and b=%d\n",d,c);
    printf("the address of a=%u and b=%u\n",&a,&b);
    printf("the address of a=%u and b=%u\n",p,q);
    printf("the valw of p=%u and q=%u\n",&p,&q);
  return 0;
}