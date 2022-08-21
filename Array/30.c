// various format of printing a array in c
#include<stdio.h>
int main()
{
    char a[15];
    printf("enter the string of length 10 to see the magic:\n");
    scanf("%s",a);
     printf("-------------------------------------------------------------\n");
    printf("%10s\n",a);
    printf("%5s\n",a);
    printf("%10.5s\n",a);
    printf("%-10.5s\n",a);
    printf("%10.0s\n",a);
    printf("%.2s\n",a);
    printf("%s\n",a);
    printf("-------------------------------------------------------------\n");
  return 0;
}


