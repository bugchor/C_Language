// copy content from one file to another

#include<stdio.h>
int main()
{
FILE * f1,*f2;
f1=fopen("abc.txt","r");
f2=fopen("bcd.txt","w");
char ch;
while((ch=fgetc(f1))!=EOF)
{
    fputc(ch,f2);
}
fclose(f1);
fclose(f2);
  return 0;
}