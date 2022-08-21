// calloc() function full form contigus memory allocation allocates multiple block of memory can takes two arguments
// calloc also of void pointer syntax (int *) calloc(3,sizeof(int)) similar like (int *)malloc(3*sizeof(int))
// in malloc initilization is garbage value where as in calloc it is initilize as zero

#include<stdio.h>
#include<stdlib.h>// required library for dma
int main()
{
    int a,*p;
    p=(int *)calloc(a ,sizeof(int));// first int * means typecasting void pointer into int then a  means no of blocks in  size of int 
    printf("enter the value how many no to add:");
    scanf("%d",&a);
    printf("\nenter the value");
    for(int i=0;i<a;i++)
    {
        scanf("%d",p+i);// here addition of pointer is telling after base increase by one int size
    }
     printf("\nentered  value is:");
    for(int i=0;i<a;i++)
    {
        printf("\n%d",*(p+i));
    }
    free(p);// it is good to free the used heap memory
  return 0;
}