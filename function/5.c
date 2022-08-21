//with return type but no argument
#include<stdio.h>
int sum(void);
int main()
{
    int s=sum();
    printf("the sum is %d\n",s);
  return 0;
}
int sum(void)
{
    int r=1,p=2;
    return r+p;
}