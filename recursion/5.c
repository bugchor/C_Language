// tail and non tail recursion 

#include<stdio.h>
void display(int a)
{
    if(a<1)
    return;
    else
    printf("%d\n",a);
    display(a/2);// tail recursion bcz after this nothing is there to return
}
int main()
{
    int a=6;
    display(a);
  return 0;
}