//2D array sum and avg of even and odd no
#include<stdio.h>
int main()
{
    int arr[2][3];
    int s=0,so=0;
     printf("\n------------------------------------------------------------------------");
   printf("\nenter the values:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             
            scanf("%d",&arr[i][j]);
        
        }
        
    }
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            if(arr[i][j]%2==0)
            {
                s+=arr[i][j];
            }
            else
            {
                so+=arr[i][j];
            }
        }
      
    }
     printf("\n------------------------------------------------------------------------");
      printf("\nthe sum of even term is: %d",s);
      printf("\n the avg of even is: %f",(float)s/6);
        printf("\nthe sum of odd term is: %d",so);
      printf("\n the avg of odd is: %f",(float)so/6);
    
  return 0;
}