// printing the string length using library function strlen();
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n------------------------------------------------------------------------");
    printf("\nenter the string:\n");
    // scanf("%15c",str);
    scanf("%s",str);
    printf("\n------------------------------------------------------------------------");
    printf("\n\n%lu",strlen(str));
    printf("\n%s",str);
  return 0;
}