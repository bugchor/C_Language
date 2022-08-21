// to create an integer array of 10 elments , accept values from the user in this array and finally display sum and average of the values of the array,

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
    printf("the values are: ");
    int i=0;
  while (i<10)
    {
        printf("\v%d",user[i++]);
    }
    
  return 0;
}