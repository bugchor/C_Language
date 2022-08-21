// gate question 2000
#include<stdio.h>
int incr(int i)
{
    static int count =0;
    count+=i;
    return count;
}
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
       j=incr(i);

       printf("%d",j);
  return 0;
}