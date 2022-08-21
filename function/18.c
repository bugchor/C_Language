// call back function 

 #include<stdio.h>
 void sum(int a,int b)// sum function 
 {
    printf("%d",a+b);
 }
 void sub(int a,int b)// sub function 
 {
    printf("%d",a-b);
 }
 void display(void (*p)(int ,int))// display function argument as pointer to function 
 {
    (*p)(6,2);// pointer with argunent

 }
 int main()
 {

    display(sum);// call the sum function bcz pointer will point to sum function
    printf("\n");// same method here also 
    display(sub);
 
   return 0;
 } 