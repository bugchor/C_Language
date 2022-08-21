//function with no argument no return type
#include<stdio.h>
void sum(void);// function declaration 
void main()
{

        sum();
 
}
void sum(void)//function definition
{
    int a,b,sum=0;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
   printf("the sum of no are:%d\n",sum);
}