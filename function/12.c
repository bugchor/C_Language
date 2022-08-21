// passing an array to function 

#include<stdio.h>
int avg(int[],int);//decleration of function 
int main()
{
    int marks[ ]={9,5,1,3,2},size,avrage;
    size=sizeof(marks)/sizeof(marks[0]);// to find size of array
    avrage= avg(marks,size);// calling of function
    printf("%d",avrage);
  return 0;
}
int avg(int m[],int a)// defination of function 
{
    int sum=0,avg=0;
    for(int i=0;i<a;i++)
    {
        sum+=m[i];

    }
    avg=sum/a;
    return avg;
}
