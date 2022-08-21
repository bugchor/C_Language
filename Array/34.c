// string checking same or not without using predefined function
#include<stdio.h>
#include<string.h>
#define R 50
int main()
{
    char fn[R],mn[R];
    int flag=0;
    printf("enter the two string\n");
    scanf("%s%s",fn,mn);
  for(int i=0;fn[i]!='\0'|| mn[i]!='\0';i++)
  {
      if(fn[i]!=mn[i])
      {
          flag=1;
          break;
      }
  }
  if(flag==1)
  printf("\nnot same");
  else
  printf("\nsame");
  return 0;
}