// converting binary no to 2s compliment;
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[16];

    int len,i;
    printf("enter the a number: ");
    scanf("%s",a);
    len=strlen(a);
    for(int k=0;a[k]!='\0';k++)
        {
            if(a[k]!='0' && a[k]!='1')
                {
                    printf("not a a number program is going to quit\n");
                    exit(0);
                }
        }
    for(i=len-1;a[i]!='1';i--) ;
    for(int j = i-1; j>=0; j--)
        {
            if(a[j]=='1')
                {
                    a[j]='0';
                }
            else
                {
                    a[j]='1';
                }
        }
            
        

    printf("the 2`s complement of %s ",a);

    return 0;

}
