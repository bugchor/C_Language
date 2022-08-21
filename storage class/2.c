// automatic  storage class a storage class will tell 4 things like default value,scope ,location ,lifetime
// auto default is garbage value
#include<stdio.h>
auto int x=20;// this is wrong because in auto we can not initilize global variable only function or block initilization is allowed
int main()
{
    auto int a=10;// location of auto variables are store in stack or we can say ram 
    auto int r;// it will give garbage value
    printf("%d",a);
    printf("%d",x);// because of this program will give error
    printf("%d",r);


  return 0;
}