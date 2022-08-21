//position of array  using user input
#include<stdio.h>
int main()
{
    int user[10];
     printf("\n------------------------------------------------------------------------");
     printf("\nenter values: ");
    for (int i = 0; i < 10; i++)
    {
       
        scanf("%d",&user[i]);
    }
    int r;
     printf("\nenter no to search: ");
     scanf("%d",&r);
     int i;
     for (i = 0; i <10; i++)
     {
        if(user[i]==r)
        {
            printf("\nposition is %d",i+1);
            break;
        }
     }
     if (i==10)
     {
         printf("\nnumber not found");
     }
     
     

   
    
  return 0;
}