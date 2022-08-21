// string array
#include<stdio.h>
int main()
{
    char a[5];
     printf("\n------------------------------------------------------------------------");
    printf("enter string:\t");
    scanf("%s",a);
    printf("hello %s ",a);
    printf("\nthe address is %u",a);
    printf("\nthe address is %d",&a);

  return 0;
}