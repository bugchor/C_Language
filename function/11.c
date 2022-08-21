//gate previous year question 2016

#include<stdio.h>

void f(int *p,int m)
{
    m+=5;
    *p+=m;
    return ;
}


int main()
{
    int i=5,j=10;
    f(&i,j);
    printf("%d",i+j);
    return 0;
}