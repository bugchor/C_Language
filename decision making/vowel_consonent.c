#include<stdio.h>
int main()
{
  char n;
  printf("entee the letter: ");
  scanf("%c",&n);
  int lower =(n =='a'||n =='e'||n =='i'||n =='o'||n =='u');
  int upper =(n =='A'||n =='E'|| n =='I'||n =='O'||n =='U');
  if(lower||upper)
  {
    printf("entered character is vowel");
  }
  else
    printf("entered character is consonent");
  return 0;
}