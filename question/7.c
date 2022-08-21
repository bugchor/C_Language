// displaying a to z and A to Z english alphabet with their decimal place in ASCII table
#include<stdio.h>
int main()
{
    char i;
    for(i=65;i<=122;i++)
    {
        if(i>=91 && i<=96)
        
            continue;
        printf("|%d-%c",i,i);
    }
  return 0;
}