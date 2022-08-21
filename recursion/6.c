// gate question 

#include<stdio.h>
void count(int a)
{
    static int r = 1;
    printf("%d\n",a);
    printf("%d\n",r);
    r++;
    if(a>1) count(a-1);
    printf("%d\n",r);


}
int main()
{
    count(3);
  return 0;
}