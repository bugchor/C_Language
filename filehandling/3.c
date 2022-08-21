// append mode in file  used to write in a file without overwritting 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE * fp=NULL;
    fp = fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    char str[20];
    printf("enter the text to append");
    gets(str);
    fputs(str,fp);// write in same line 
    //fprintf(fp,"\n%s",str);// append in diff line cuz \n is used
  //  while(!feof)//  will not give any output but modifie the file because the pointer is always at end so this is not true
  //  {
  //   char r = fgetc(fp);
  //   printf("%d",r);
  //  }
    fclose(fp);
  return 0;
}
