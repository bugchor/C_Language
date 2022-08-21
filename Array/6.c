//sorting array
#include<stdio.h>
int main()
{
    int user[4];
    int temp;
     printf("\n------------------------------------------------------------------------");
      printf("\nenter values: ");  
    for (int i = 0; i <4; i++)
    {
    
        scanf("%d",&user[i]);
    }
     for (int i = 0; i <3; i++)
     {
        for (int j = i+1; j <4; j++)
        {
            if(user[i]>user[j])
            {
                temp=user[i];
                user[i]=user[j];
                user[j]=temp;
            }
        }
        
     }
     for (int i = 0; i < 4; i++)
     {
        printf("%d\t",user[i]);
     }
     

     return 0;
}