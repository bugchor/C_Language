//sum of two numbers 5 times
#include<stdio.h>
void sum(void);// function declaration 
int main()
{
    for(int i=1;i<=5;i++)
    {
        sum();
    }
  return 0;
}
void sum(void)//function definition
{
    int a,b,sum=0;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
   printf("the sum of no are:%d\n",sum);
}