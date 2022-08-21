// void pointers 
#include<stdio.h>
int main()
{
    int a=2;
    char r='c';
    float n=12.3;
    void *p;
    p=&a;// assining the pointer equal to address of a;

    printf("%d \n",*(int *)p);// using type cast casting pointer as integer
    p=&r;// assining the pointer equal to address of c;
    printf("%c \n",*(char *)p);// using type cast casting pointer as char
    p=&n;// assining the pointer equal to address of n;
    printf("%f \n",*(float *)p);// using type cast casting pointer as float

  return 0;
}