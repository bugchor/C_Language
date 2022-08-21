// sum of n natural number using direct recursion 

#include<stdio.h>
int display(int x)
{
    int s=0;
    if(x==0)//x==1
    return s;//return x 
    s=x+display(x-1);
  return s;
}
int main()
{
  int a=5;
  int r = display(a);
  printf("%d\n",r);
  return 0;
}