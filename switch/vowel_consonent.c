#include<stdio.h>
int main()
{
 char a;
    printf("enter the alphabet: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    
    default:
        printf("consonent");
        break;
    }
  return 0;
}