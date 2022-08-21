// create three string s1,s2,s3 then read s1 and s2 then compare they are equal or not if not then concatenate,then copy s1 to s3 and at end print their length;
#include<stdio.h>
#include<string.h>
#define R 50
int main()
{

    char s1[R],s2[R],s3[R],r;
    int a,b;
    
    printf("enter the value for first string then press return/enter\nAnd then enter for second string\n");
    scanf("%s%s",s1,s2);
    a=strcmp(s1,s2); // string comparision will give integer value
    if(a!=0)
    {
        printf("%d diffrence in ASCII",a);
        strcat(s1,s2);
        
    }
    strcpy(s3,s1);
    
    printf("\nfirst string \n%s\nsecond string\n%s\nthird string\n%s\nlength of s1:%lu\nlength of s2:%lu\nlength of s3:%lu\n",s1,s2,s3,strlen(s1),strlen(s2),strlen(s3));
  return 0;
}