// typedef is used for making your code more easy 

#include<stdio.h>
typedef struct student{
    int roll;
    float fee;
    char name[20];
}stud;// we can give any name that is used further 
stud s1={1,33.3,"amir"};// here we can write directly using stud from above name 

int main()
{
    stud * ptr=&s1;// pointer with data type
    printf("%d\n",s1.roll);
    printf("%d\n",ptr->roll);
    printf("%d",(*ptr).roll);// these all three ways are used to print the value in struct
  return 0;
}