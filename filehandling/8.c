// ftell() is used to tell the no of bits from begning to the current position 

#include<stdio.h>
int main()
{
FILE * fp=NULL;
fp=fopen("abc.txt","r");
long int pos= ftell(fp);
printf("%lu",pos);
fseek(fp,4,SEEK_SET);// moving the pointer to 4 position forward
printf("\n%lu",ftell(fp));
  return 0;
}