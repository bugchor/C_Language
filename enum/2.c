// calculator using enum

#include<stdio.h>
int main()
{
    float a,b;
    int c;
enum cal{add,sub,mul,div};
enum cal r;
printf("choose the option:\n0 to add\n1 to sub\n2 to mul\n3 to div\n:");
scanf("%d",&c);
printf("\nenter the value to calculate:");
scanf("%f",&a);
scanf("%f",&b);
switch (c)
{
case add:
    printf("%2.2f",a+b);
    break;
case sub:
    printf("%2.2f",a-b);
    break;
case mul:
    printf("%2.2f",a*b);
    break;
case div:
    printf("%2.2f",a/b);
    break;
default:
    printf("choose correct option");
    break;
}

  return 0;
}