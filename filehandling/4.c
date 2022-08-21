// to erase and rewrite something in a file W+ mode used for both read and write

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp= NULL;
    fp=fopen("abc.txt","w+");// erase all content of file and write from begning 
    char ch;
    char str[10];
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc('a',fp);// used to put a in file
    fputs("amit",fp);// used to ptu amit in file pointer will stop at t means end of document
    rewind(fp);// used to send the pointer from end to start 
   
    while(!feof(fp))// this method also used to print the output or read 
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    // fgets(str,9,fp);
    // printf("%s",str);
    fclose(fp);
  return 0;
}