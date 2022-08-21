// string traversing array
#include <stdio.h>
int main(){
    char a[15];
     printf("\n------------------------------------------------------------------------");
    printf("\nEnter Your String to print in traverse way:\t");
    gets(a);
    //scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        printf("\n%c",a[i]);
    }
    return 0;
}