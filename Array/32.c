// concatenation of string first name ,middle name and last name into third array
#include<stdio.h>
#include<string.h>
#define R 50
int main()
{
    char fn[R],mn[R],ln[R],n[R];
    int i,j,k;
    printf("enter the full name\nfor example:---\nfirstname\nmiddlename\nlastname\n");
    scanf("%s%s%s",fn,mn,ln);
    // strcat(strcat(strcat(n,fn),mn),ln);
    for(i=0;fn[i]!='\0';i++)
    {
       
        n[i]=fn[i];
        
    }
     n[i]=' ';
    for(j=0;mn[j]!='\0';j++)
    {
    
        n[j+i+1]=mn[j];
     
    }
    n[j+i+1]=' ';
    for(int k=0;ln[k]!='\0';k++)
    {

        n[i+k+j+2]=ln[k];
    }
    printf("%s",n);
  return 0;
}