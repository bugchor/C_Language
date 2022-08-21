// basic example of recursion 

#include<stdio.h>
void display(int a)
{
    if(a<1)
        return;
    else
    {
        printf("%d\n",a);
        display(a-1);
        printf("%d\n",a);
    }
}
int main()
{
    int a=3;
    display(a);
  return 0;
}



// in this example first function print the 1st printf until reach if statment then retun from back side 