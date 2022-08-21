// returning pointer

#include<stdio.h>

int * returnpointer(int[]);
int main()
{
    int a[]={1,2,4,5};
    int *p = returnpointer(a);
    printf("%d",*p);// printing at position
  return 0;
}

int * returnpointer(int a[])
{
    a+=2;// increase the pointer by 2 
    return a;
}