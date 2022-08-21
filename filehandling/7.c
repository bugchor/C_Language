// usning fseek() for moving the cursor/pointer in a file 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp=NULL;
    fp=fopen("abc.txt","r");
    char ch;
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
   // fseek syntax is (file pointer,position to put the cursor/pointer,type)
    fseek(fp,9,SEEK_SET);// seek set means from begning 
    ch=fgetc(fp);
    printf("%c",ch);
    fseek(fp,-7,SEEK_CUR);//seek cur means current position
    ch =fgetc(fp);
    printf("\n%c",ch);
    fseek(fp,-3,SEEK_END);// seek end means end position 
   ch =fgetc(fp);
    printf("\n%c",ch);
    fclose(fp);
  return 0;
}