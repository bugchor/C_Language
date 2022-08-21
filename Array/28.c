// taking a line input in string 
#include<stdio.h>
#define R 100
int main()
{
    char r[R],d;
    int c=0;

    printf("enter the sentence at the end please press enter/return\n");

    do
    {
        scanf("%c",&d);
        r[c]=d;
        c++;

    } while (d!='\n');
    printf("%s",r);
    
  return 0;
}