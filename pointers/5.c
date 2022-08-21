// subtraction in pointers subtraction between two pointer is possible and gives integer value 
// for example two integer pointer *a and *b will give value like 1012-1000/4;
// and pointer with constant will give pointer
#include<stdio.h>
int main()
{
    int a[5]={1,3,4,6,9},d;
    int *p=a,*q=&a[3];
    d=p-q;
    printf("the value of d=%d\n",d);
    printf("the value of q-p=%d\n",q-p);
    printf("the value at q=%d\n",*q);
    q=q-2;
    printf("the vaule now %d\n",*q);

  return 0;
}