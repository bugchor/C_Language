// basic of structure 

#include<stdio.h>
struct student{//struct student full is data type 
    int roll;
    float fee;
    char name[20];
};// never forget to put semicoln
struct student s1={1};// only roll no is initilized char is null and float is zero 
int main()
{
    struct student s2={2,33.3,"arjun"};//compile time initilization 
    struct student s3;// run time initilization
    printf("enter the value for student 3\n");
    scanf("%d\n",&s3.roll);// must add variable with type 
    scanf("%f\n",&s3.fee);
    scanf("%s",&s3.name);


    if(s1.roll>s2.roll)// comprision is only done with type
    printf("hi\n");


// printing the values
printf("detail of student 1:\n");
printf("%d\n%3.2f\n%s\n",s1.roll,s1.fee,s1.name);
printf("detail of student 2:\n");
printf("%d\n%3.2f\n%s\n",s2.roll,s2.fee,s2.name);
printf("detail of student 3:\n");
printf("%d\n%3.2f\n%s\n",s3.roll,s3.fee,s3.name);
  return 0;
}