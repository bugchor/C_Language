#include<stdio.h>
int main()
{
  float f,c;
  printf("enter the reading in f: ");
  scanf("%f",&f);
  c = (f-32)* 5/9;
  printf("the reading in c is %4.4f\n",c);
  return 0;
}