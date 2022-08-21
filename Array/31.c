// fun with string 
#include<stdio.h>
int main()
{
    int c,d;
    char a[]={"cprogramming"};
    printf("\n\n");
    printf("------------------------------------------------------");
    for(c=0;c<=11;c++)
        {
            d=c+1;
            printf("|%-12.*s|\n",d,a);
        }
         for(c=0;c<=11;c++)
        {
            d=c+1;
            printf("|%12.*s|\n",d,a);
        }
     printf("------------------------------------------------------");
     for(c=11;c>=0;c--)
        {
            d=c+1;
            printf("|%-12.*s|\n",d,a);
        }
         for(c=11;c>=0;c--)
        {
            d=c+1;
            printf("|%12.*s|\n",d,a);
        }
     printf("------------------------------------------------------");
  return 0;
}