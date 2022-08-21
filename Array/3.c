//program calculates the average of even and odd nos also separately.
#include<stdio.h>
int main()
{
    int user[10];
    int se=0,so=0,c=0;
     printf("\n------------------------------------------------------------------------");
      printf("\nenter values: "); 
    for (int i = 0; i < 10; i++)
    {
      
        scanf("%d",&user[i]);
        if(user[i]%2==0)
        {
            se+=user[i];
            c+=1;
        }
        else
            so+=user[i];
    }
    
    printf("sum of even nos are %d\n",se);
    printf("avg of even nos are %3.2f\n",(float)se/c);
    printf("sum of odd nos are %d\n",so);
    printf("avg of odd nos are %3.2f\n",(float)so/(10-c));
    
  return 0;
}