// gate 2016 question 

#include<stdio.h>
int a,b,c=0;
void p()
{
    register int a=2;
    int b=1;
    a+=++b;
    printf("\n%d %d",a,b);
}
int main()
{
    auto int a=1;
    p();
    a+=1;
    p();
    printf("\n%d %d",a,b);
  return 0;
}