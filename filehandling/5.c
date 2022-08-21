// to modify in exesting file used for reading and writting 

#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp=NULL;// as usual defining file pointer 
   fp=fopen("abc.txt","r+");// using r+ to modify content in file if file is not there it will not run 
   char c='z',ch;
   char str[20]="happy to see these";
   if(fp==NULL)
   {
    printf("error");
    exit(1);
   }
   fputc(c,fp);// using variable to put the char the added char will be added from the begning of file
   fputc('r',fp);// directly putting char
   fputs(str,fp); 
   rewind(fp);
    while(!feof(fp))// this method also used to print string using char
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
  
   fclose(fp);
  return 0;
}