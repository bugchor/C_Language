// create a 2D array for getting marks of 3 student of 4 subjects and display the total,max,subject no in which max for each student
#include<stdio.h>
int main()
{
    int a[3][4],sum,max,sub;
     printf("\n------------------------------------------------------------------------");
     printf("\nenter the value:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
               
                scanf("%d",&a[i][j]);
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j=sum= 0; j < 4; j++)
        {
            sum+=a[i][j];

        }
        printf("\nthe total marks of student %d is %d ",i+1,sum);
    }
     for (int i = 0; i < 3; i++)
    {
        for (int j=max= 0; j < 4; j++)
        {
           if(max<a[i][j])
           {
            max=a[i][j];
            sub=j+1;
           }

        }
         printf("\n------------------------------------------------------------------------");
        printf("\nthe highest marks of student %d is %d i.e subject no %d",i+1,max,sub);
    }
    
  return 0;
}