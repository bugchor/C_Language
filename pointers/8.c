// null pointer 
#include<stdio.h>
int main()
{
 int a=2,b=5;
 int * p=NULL,* q=NULL; // initilizing and assigining both pointer as null means address is 0
 p=&a;
 if(a==q)
 {
    printf("both are uninitilized");
 }
 else
{
    printf("%d",*p);
}

  return 0;
}