// asking user to enter the value how many value they want to enter then taking the numbers
// in dma the memory is allocated at runtime but in sma the memory is allocated at compile time

                            // malloc() function mostly used for structure full form is memory allocation allocate block of memory
#include<stdio.h>
#include<stdlib.h>// required library for dma
int main()
{
    int a,*p;
     printf("enter the value how many no to add:");
    scanf("%d",&a);
    p=(int *)malloc(a * sizeof(int));// first int * means typecasting void pointer into int then a * means multiply with a the size of int 
   
    printf("\nenter the value");
    // for(int i=0;i<a;i++)
    // {
    //     scanf("%d",p+i);// here addition of pointer is telling after base increase by one int size
    // }
     printf("\nentered  value is:");
    for(int i=0;i<a;i++)
    {
        printf("\n%d",*(p+i));
    }
    free(p);// it is good to free the used heap memory
  return 0;
}