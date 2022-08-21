// max of user input in array
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
     int i,n=0;
     for (i = 0; i <10; i++)
     {
        if(user[i]>n)
        {
            n=user[i];
        }
     }
     printf("%d is max",n);
     

    return 0;
}