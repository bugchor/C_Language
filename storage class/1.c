// scope of variable

#include<stdio.h>
int a=10;
void f1()
{
    int a=2;
    printf("%d",a);
}
int main()
{
    
   f1( );
    {
        int a=4;
        printf("%d",a);
    }
{
    printf("%d",++a);
}


  return 0;
}
