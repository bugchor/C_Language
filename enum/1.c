// enum is a user defined data type used to assign name to integer constant
// it is used for assigning specific list of values 
// automatically it assign integer from 0 to the value or we can give our own value also 
// example 
// enum week{sun,tue,wed,thr,fri,sat} here automaticly sun=0 if we do printf("%d",r)=0 where r is enum week r=sun;
// if we use like enum week{sun=1,tue,wed,thr,fri,sat} here printf("%d",r)=1 and the remaning will increase by previous +1
// if we use like enum week {sun=1,tue=5,wed,thr,fri,sat} here printf("%d",r)=1 here printf("%d",r2)=5 here printf("%d",r3)=6 where r2 is tue and r3 is wed  
// enum is local or global scope depend where we initilize
// in same scope duplicates not allowed like variable 
// enum is only integer in swithch case also we can use enum


#include<stdio.h>
int main()
{

enum x{c,cpp,java};
enum y{x};
enum y var;
printf("%lu",sizeof(var));// it will take the first int only and size of 1 int in 64bit machine is 4
  return 0;
}