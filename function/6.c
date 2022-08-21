//with argument and without return type
#include<stdio.h>
void even_odd(int x);
int main()
{
    int a;
    printf("enter the no:");
    scanf("%d",&a);
    even_odd(a);
  return 0;
}
void even_odd(int x)
{
    if(x%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}