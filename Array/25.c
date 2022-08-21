//transpose of a matrix
#include<stdio.h>
#define R 50
int main()
{
    int a[R][R],p,q;
    printf("\nenter the order of matrix:");
    scanf("%d%d",&p,&q);
    printf("enter the matrix");
    for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    for(int i=0;i<q;i++)
        {
            for (int j = 0; j <p; j++)
            {
                printf("%d\t",a[j][i]);
            }
            printf("\n");
        }
  return 0;
}