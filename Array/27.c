//sum of row and column of array for nXn order;
#include<stdio.h>
#define R 40
int main()
{
    int a[R][R],sr,sc,p,q;
    printf("enter the order:\n");
    scanf("%d%d",&p,&q);
    printf("enter the matrix:\n");
    for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
     for(int i=0;i<p;i++)
                {   sr=sc=0;
                    for(int j=0;j<q;j++)
                        {
                              sr+=a[i][j];
                              
                     
                                    sc+=a[j][i];
                                   
                              
                        }
                        printf("sum or row  %d\n",sr);
                         printf("sum or col %d\n",sc); 
                        printf("\n");
                }
  return 0;
}