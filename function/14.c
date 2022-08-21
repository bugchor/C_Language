// returnting string from function
#include<stdio.h>
char * display();
int main()
{
    char * str;
    str = display();
    printf("string is %s",str);
  return 0;
}

char * display()
{
    return "amit";
}

// char * display()
// {
//     static char str[100];
//     printf("enter the string:\n");
//     scanf("%s",str);
//    static char *p = &str;
//     return p;
// }