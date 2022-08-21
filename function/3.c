// call by refrence
 // call by value
#include<stdio.h>
void function(int * x,int * y);
int main()
{
     int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    function(&a,&b);
    printf("the value of a and b are:%d  and %d\n",a,b);
  return 0;
}
void function(int * x,int * y)
{
    *x=1;
    *y=3;
    printf("the value of x and y are : %d %d\n",*x,*y);
}