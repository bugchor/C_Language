// mindblowing question 

#include<stdio.h>
int disp()
{
    static int a=16;
    return a--;
}
int main()
{
    for(disp();disp();disp())
        printf("\n%d",disp());
  return 0;
}