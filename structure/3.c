// array of sturcture

#include<stdio.h>
struct student{//struct student full is data type 
    int roll;
    float fee;
    char name[20];
};
int main()
{
struct student s[10];
for(int i=0;i<10;i++)
{
    scanf("%d%f%s",&s[i].roll,&s[i].fee,&s[i].name);
}
for(int i=0;i<10;i++)
{
   printf("%d Student detali are:\n",i+1);
   printf("%d\n%4.2f\n%s\n",s[i].roll,s[i].fee,s[i].name);
}

  return 0;
}