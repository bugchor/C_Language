// gate question 2019
#include<stdio.h>
int jumble(int a,int b)
{
  a=2*a+b;
  return a;
}
int main()
{
int x=2,y=5;
  y=jumble(y,x);
   x=jumble(y,x);
  printf("%d",x);
  return 0;
}