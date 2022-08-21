//multiplication of matrix
#include<stdio.h>
#define R 40
int main()
{
    int a[R][R],b[R][R],m,n,p,q,s,c[R][R];
    printf("enter the order of 1st matrix:\n");
    scanf("%d%d",&m,&n); 
    printf("enter the order of 2nd matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("the correct order order is not there");
        return 0;
    }
    else
    {

          printf("\nenter the first matrix: \n");
            for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                }

            printf("\nenter the second matrix: \n");
             for(int i=0;i<p;i++)
                {
                    for(int j=0;j<q;j++)
                        {
                            scanf("%d",&b[i][j]);
                        }
                }
    }

    
          printf("\nmultliplied matrix is: \n");
            for(int i=0;i<m;i++)
                {
                    for(int j=0;j<q;j++)
                        {
                            s=0;
                            for(int k=0;k<m;k++)
                                {
                                    s+= a[i][k] *b[k][j];
                                    c[i][j]=s;
                                  
                                }
                                  printf("%d\t",c[i][j]);
                        }
                        printf("\n");
                }
  return 0;

}   