// to count no of line in a file

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE * fp=NULL;
char ch;
fp=fopen("abc.txt","r");
if(fp==NULL)
{
    printf("error");
    exit(1);
}
int count=1;

while((ch=fgetc(fp))!=EOF)//endof is EOF
{
    if(ch=='\n')
    {
        count++;
    }

}
fclose(fp);
printf("%d",count);
  return 0;
}