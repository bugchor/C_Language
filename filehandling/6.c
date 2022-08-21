// append the file and provide read option also the mode is A+

#include<stdio.h>
int main()
{
    FILE * fp;
    fp=fopen("abc.txt","a+");
    char r[50];
    char str[80]="\namit is love of anjali";
    fputs(str,fp);
    rewind(fp);
    while(!feof(fp)) 
   {
    fgets(r,40,fp);
    printf("%s",r);
   }
   fclose(fp);
  return 0;
}