// dangling pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int *)malloc(sizeof(int));
    *p=10;
    printf("%d\n",*p);
    free(p);
    p=NULL;
    printf("%d\n",*p);

  return 0;
}