// copy 1 string arry to other
#include<stdio.h>
#define R 100
int main()
{
    char a[R],b[R];
    printf("enter the string\n");
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
       {
        b[i]=0;
        b[i]=a[i];
       } 

    printf("second array is %s\n",b);
    

  return 0;
}