//finding size and initilazing and declering

#include<stdio.h>

struct student{//struct student full is data type 
    int a;
    float b;
   // char r;
    char name;
    //int c;padding is used to store data
};// here also we can initilize s,r,t and many more variable
//sturct student s2;// we can initilize out side of the main also

int main()
{
    struct student s;
    printf("%d\n",sizeof(s));  //this both method are used to find the size 
    printf("%d",sizeof(struct student));
  return 0;
}