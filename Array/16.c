// reversing array
#include<stdio.h>
int main()
{
     char str[10];
    int count=0,temp,index;
     printf("\n------------------------------------------------------------------------");
    printf("\nenter the string:\t");
    scanf("%s",str);
  for (int i = 0; str[i]!='\0'; i++)
  {
    count++;
  }
  index=count-1;
  for (int i = 0; i<count/2; i++)
  {
        temp=str[i];
        str[i]=str[index];
        str[index]=temp;
        index--;
  }
 printf("\n------------------------------------------------------------------------");
  printf("\nthe reversed string is %s\n",str);
  

  return 0;
}