// ralloc() is used for increase the allocated size of memory allocated 

#include<stdio.h>
#include<stdlib.h>// required library for dma
int main()
{
    int a,r,*p;
    p=(int *)calloc(a ,sizeof(int));// first int * means typecasting void pointer into int then a  means no of blocks in  size of int 
    printf("enter the value how many no to add:");
    scanf("%d",&a);
    printf("\nenter the value");
    for(int i=0;i<a;i++)// initial value zero to store from first block
    {
        scanf("%d",p+i);// here addition of pointer is telling after base increase by one int size
    }
     printf("\nentered  value is:");
    for(int i=0;i<a;i++)
    {
        printf("\n%d",*(p+i));
    }
    printf("\nenter the value how much you want to increase:");// if we want to increase block size without loosing data
    scanf("%d",&r);
    p= (int *)realloc(p,r*sizeof(int));// realloc is used where r is tells how much to increase
    printf("\nenter the value");
    for(int i=a;i<r;i++)// base value a bcz upto a already data if filled
    {
        scanf("%d",p+i);// here addition of pointer is telling after base increase by one int size
    }
     printf("\nentered  value is:");
    for(int i=0;i<r;i++)
    {
        printf("\n%d",*(p+i));
    }
    free(p);// it is good to free the used heap memory
  return 0;
}