// changing upper case to lower case in string 
#include<stdio.h>
int main()
{
    char str[10];
    int cou;
    printf("enter the text:\t");
    scanf("%s",str);
     printf("\n------------------------------------------------------------------------");
    printf("\nthe given value is %s",str);
    for (int i = 0;str[i]!='\0'; i++)
    {
        cou++;
    }
    for(int i=0;i<cou;i++)
{
    if(str[i]>='A'&&str[i]<='Z'){
        str[i]=str[i]+32;
    }
   else if(str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;
    }
}
    printf("\n------------------------------------------------------------------------");
    printf("\n\nthe updated string id %s",str);
  return 0;
}