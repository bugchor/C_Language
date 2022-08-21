// gate question 

#include<stdio.h>
int i=0,j=1;
void show(int * p,int *q)
{
    p=q;
    *p=2;
}
int main()
{
    show(&i,&j);
    printf("%d\n%d",i,j);
  return 0;
}