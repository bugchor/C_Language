//extern storage class the life time is till end of program and stored in ram and used to provide refrence to alread defined varible
// global variable is assigned as extern where as block variable is assigned as auto 
// exter or global variable is having default value as 0
#include<stdio.h>

int main()
{
extern int a;// it gives the refrence to outsicd variable that is below the main function 
printf("%d",a);
  return 0;
}
int a;