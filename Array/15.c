//string array geting input from user and printing the length
#include<stdio.h>
int main()
{
    char a[10];
     printf("\n------------------------------------------------------------------------");
    printf("\nenter the string: ");
    scanf("%s",a); // gets(a);
    int sum=0;
    for(int i=0;a[i]!='\0';i++)
    {
        sum+=1;//sum++;
    }
     printf("\n------------------------------------------------------------------------");
    printf("\nthe length is %d",sum);

  return 0;
}