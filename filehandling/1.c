// how to write to a file

#include<stdio.h>// used for fputc(),fputs(),fprintf()
#include<string.h>// for string function gets()
#include<stdlib.h>// for exit() function
int main()
{

    FILE *fp=NULL;// declearing pointer to file 
    fp = fopen("abc.txt","w");//here w represent write mode // fopen is used to open file at file name we have to write the pathe also if file is not in same directory or it will create a file then open if file is  not there
    if(fp==NULL)              // here w is used to write into file there are three function that are used 
    {                           // fputc is used to write a single char 
    printf("error");
     exit(1);
    }
    char c='a';
    char r[20]="amit";
    int a=10;
    // fputc(c,fp);
    // fputs(r,fp);// fputs is used for writing string 
    // for(int i=0;i!=strlen(r);i++)
    // {
    //     fputc(r[i],fp);
    // }
    fprintf(fp,"%d %s %c",a,r,c);// fprintf is used for writint mixed data type here first we write pointer 

    fclose(fp);// used for exiting the file
  return 0;
}