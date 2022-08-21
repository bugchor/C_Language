//max and min with position in array
#include<stdio.h>
int main()
{
    int user[10];
     printf("\n------------------------------------------------------------------------");
    printf("\nenter values: ");
    for (int i = 0; i <10; i++)
    {
        
        scanf("%d",&user[i]);
    }
    int max=0,r=0,q=0,min;
    min=user[0];
    for (int i = 0; i < 10; i++)
    {
        if(user[i]>max)
        {
            max=user[i];
            r=i+1;
        }
        if(user[i]<min)
        min=user[i];
        q=i+1;
    }
    
    printf("\n%d is max\n%d is min",max,min);
    printf("\n%d is position of max\n%d is position of min",r,q);
    
    
 

  return 0;
}