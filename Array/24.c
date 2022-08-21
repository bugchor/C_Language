//addition of two matrix
#include<stdio.h>
#define R 50
int main()
{
    int a[R][R],b[R][R],c[R][R],m,n,p,q;
    printf("\nenter the order of 1st matrix:");
    scanf("%d%d",&m,&n);
    printf("\nenter the order of second matrix: ");
    scanf("%d%d",&p,&q);
    if(m!=p || n!=p)
        {
            printf("\nthe order is diffrent attition not possible");
            
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
            
             for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                        {
                            c[i][j]=a[i][j]+b[i][j];
                            printf("%d\t",c[i][j]);
                        }
                    printf("\n");
                }

      }       
     
  return 0;
}