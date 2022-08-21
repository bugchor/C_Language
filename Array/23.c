//multiplication table using two dimensional array
#include<stdio.h>
int main()
{
    int table[10][10],row,column;
     printf("   ");
    for (int i =1; i < 11; i++)
            printf("%4d",i);
            
       
    printf("\n------------------------------------------------------------------------\n");
    for(int i=0;i<10;i++)
        {
            row=i+1;
            printf("%2d|",row);

            for (int j = 1; j<=10; j++)
            {
                column=j;
                table[i][j]=row * column;
                printf("%4d",table[i][j]);
            }

            printf("\n");
            
        }
    
  return 0;
}