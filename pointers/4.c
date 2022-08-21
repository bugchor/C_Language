//addition on pointers
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    // int *q=&a[0]; correct many pointer can point to same variable
    // p = p+q error because it is not possible to add two pointers

    printf("the value at index 0 is %d\n",*p);
    printf("the address at index 0 is %u = %u\n",p,&a[0]);
    p=p+2;
    printf("the value at index 2 is %d\n",*p);
    printf("the address at index 2 is %u = %u\n",p,&a[2]);
  return 0;
}