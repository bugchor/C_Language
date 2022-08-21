#include<stdio.h>
int main()
{
  float p,r,t;
  printf("enter the principal amount\nrate of intrest\ntimegiven\n");
  scanf("%f\n%f\n%f",&p,&r,&t);
  float si = (p * r * t)/100;
  printf("the simple intrest is %3.3f\n",si);
  return 0;
}