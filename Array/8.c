//sum of the digit of array
#include<stdio.h>
int main()
{
    int user[5];
     printf("\n------------------------------------------------------------------------");
    printf("\nenter the values: ");
    for (int i = 0; i < 5; i++)
    {
      
        scanf("%d",&user[i]);
    }
for (int i = 0; i < 5; i++)
{
  int s=0;
  while (user[i]!=0)
  {
  s+=user[i]%10;
  user[i]/=10;
  }
   printf("\n------------------------------------------------------------------------");
  printf("\nthe sum for %d is %d ",i,s);
}



    
  return 0;
}