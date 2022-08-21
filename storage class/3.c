// register storage class
// register reduce the switching time from ram to cpu memory
// we can not get use register variable to pointer but we can use register variable as pointer to  store the address of another variable
// eg register int * r =&p;where p is any other variable

#include<stdio.h>
//register int a=10;// this is wrong because in auto we can not initilize global variable only function or block initilization is allowed
int main()
{
    register int r=2;// it is stored in cpu register
    register int p;// it will give garbage value
    printf("%d\n",r);
    printf("%d",p);
  return 0;
}