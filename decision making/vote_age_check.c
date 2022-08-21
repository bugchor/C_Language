#include<stdio.h>
int main()
{
  int age;
  printf("enter your age: ");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("you are eligible to vote");
  }
  else
    printf("you are less then 18 years you are not eligible");
  return 0;
}