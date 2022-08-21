// it is not used today because in this the last data is only stored other all are over written similar like structure
// will keep the last value that filled in it
#include<stdio.h>
union student{
    int a;
    float b;
    char name[20];
};
union student a;

int main()
{
    printf("enter");
    scanf("%d",&a.a);
    scanf("%f",&a.b);
    scanf("%s",&a.name);
 printf("%d\n",a.a);// will get garbage value only name is correct 
 printf("%f\n",&a.b);
 printf("%s\n",&a.name);
  return 0;
}