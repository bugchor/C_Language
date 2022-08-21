//to create an array of 10 integers , accept values from the user in that array and calculate
//the sum of even nos as well as the sum odd nos of the array separately.
#include<stdio.h>
int main()
{
    int user[10];
    int se=0,so=0;
     printf("\n------------------------------------------------------------------------");
    printf("\nenter values: "); 
    for (int i = 0; i < 10; i++)
    {
       
        scanf("%d",&user[i]);
        if(user[i]%2==0)
        {
            se+=user[i];
        }
        else
            so+=user[i];
    }
    
    printf("sum of even nos are %d\n",se);
    printf("sum of odd nos are %d\n",so);
    
  return 0;
}