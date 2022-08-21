// reading from file

#include<stdio.h>
#include<stdlib.h>// for function exit()
int main()
{
    FILE * fp=NULL;// declearing file pointer
    fp=fopen("abc.txt","r");// here in read mode if file do not exit then it will show error it will not creat new file here r represent read mode
    if(fp==NULL)// checking that the pointer is initilized to file or not
    {
        printf("error");
        exit(1);
    }
    char c;
    int a;
    float b;
    char str[23];
    //c=fgetc(fp);// here fgetc is used to read a single char
    // printf("%c",c);
    // while(!feof(fp))// here feof()is a function used to tell end of file this loop will behave like a string
    // {
    //      c=fgetc(fp);
    // printf("%c",c);
    // }
    fscanf(fp,"%s",str);// used like fprintf to read multiple datatype
    printf("%s ",str);
    
    //  while(!feof(fp))// this loop will print all the content of a file
    //  {
    //      fgets(str,7,fp);
    // printf("%s",str);
    //  }
    //fgets(str,7,fp);// this will read the string and stop when find \n here the size of string is 7 
    //printf("%s",str);
   
    fclose(fp);

  return 0;
}