// question 


#include<stdio.h>
struct stud{
    int a;
    float b;
    int c;
};
int main()
{
    struct stud a={.b=2,.a=2,.c=1};
    printf("%d\n%f\n%d\n",a.a,a.b,a.c);
  return 0;
}