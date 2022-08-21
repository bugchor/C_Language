// program to calculate the expression total= summation of xi^2 where i=1 to 10 and the value of x read from terminal.
#include<stdio.h>
int main()
{
    float total[10],sum=0;
     printf("\n------------------------------------------------------------------------");
    for(int i=0;i<10;i++)
        {
            printf("\nenter the value of X %d:  ",i+1);
            scanf("%f",&total[i]);
             printf("the value entered by user is  X[%d]= %.2f ",i+1,total[i]);
            sum+=total[i]*total[i];

        }
    printf("\n------------------------------------------------------------------------");
    printf("\ntotal =%.2f",sum);
    
   
  return 0;
}