// pointer to structure
#include<stdio.h>
struct student{
    int roll;
    float fee;
    char name[20];
};
struct student s1={1,33.3,"amir"};

int main()
{
    struct student * ptr=&s1;// pointer with data type
    printf("%d\n",s1.roll);
    printf("%d\n",ptr->roll);
    printf("%d",(*ptr).roll);// these all three ways are used to print the value in struct
  return 0;
}