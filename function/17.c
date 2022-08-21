// function pointer
#include<stdio.h>
int sum(int a,int b)// function for sum 
{
    return a+b;
}
int (*p)(int a,int b)=&sum;// function pointer
int main()
{
    int s=0;
    s= (*p)(3,5);
    printf("%d",s);
  return 0;
}