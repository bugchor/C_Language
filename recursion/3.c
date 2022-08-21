// factorial of number by using   indirect recursion

#include<stdio.h>
int fun2(int);
int fun1(int);
int f1(int a)
{
    if(a<=1)
    return 1;
    else
    {
        return a * fun2(a-1);
    }
}
int fun2(int x)
{
    if(x<=1)
        return 1;
    else
        return x*f1(x-1);
}
int main()
{
    printf("%d\n",f1(5));
  return 0;
}