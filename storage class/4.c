//static storage class this by default zero or null and life time in throughout the program can be used as global variable
// location is inside the block

#include<stdio.h>
void dto()
{
    static int a;// will be initlized at once  stored in ram 
    a+=10;
    printf("\n%d",a);
}
int main()
{
    dto();
    dto();
  return 0;
}