// string is palindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int flag=0,r,l,ln;
    printf("enter the string:\n");
    scanf("%s",s);
    ln= strlen(s);
    l=0;
    r=ln-1;
    for(int i=0; l < r && flag==0;i++)
    {
        if(s[l]!=s[r])
         flag=1;
            l++;
            r--;
        
    }
    if(flag==0)
    printf("the string %s is palindrome",s);
    else
    printf("the string %s is not palindrome",s);
  return 0;
}