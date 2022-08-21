// create 2,2D array and add them and store in 3rd array
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
     printf("\n------------------------------------------------------------------------");
    printf("\nenter the value for 1st matrix: ");
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            scanf("%d",&a[i][j]);
        }
        
    }
      printf("enter the value for 2nd matrix: "); 
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
        }
        printf("\n");
        
    }
    
  return 0;
}