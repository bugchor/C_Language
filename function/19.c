// calculato using function pointer

#include<stdio.h>
void sum(int a,int b){

    printf("%d",a+b);
}
void sub(int a,int b){

    printf("%d",a-b);
}
void mul(int a,int b){

    printf("%d",a*b);
}
void div(int a,int b){

    printf("%d",a/b);
}
void rem(int a,int b){

    printf("%d",a%b);
}

void (*p[])(int , int)={sum,sub,mul,div,rem};

int main()
{
    int a,b,ch;
    printf("enter the choice as follow\n\n\n0 for add\n\n1 for sub\n\n2for mul\n\n3for div\n\n4 for rem\n");
    scanf("%d",&ch);
    printf("\nenter the number:\n");
    scanf("%d%d",&a,&b);
    (*p[ch])(a,b);   

  return 0;
}