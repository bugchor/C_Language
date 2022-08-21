#include<stdio.h>
int main()
{
  int a,b,r;
  printf("enter two no: ");
  scanf("%d %d",&a,&b);
  printf("choose any operator\n1.+\n2.-\n3.*\n4./\n");
  scanf("%d",&r);

  switch(r)
  {
    case 1:
    printf("%d + %d = %d",a,b,a+b);
    break;
    case 2:
    printf("%d - %d = %d",a,b,a-b);
    break;
    case 3:
    printf("%d X %d = %d",a,b,a*b);
    break;
    case 4:
    printf("%d /%d = %d",a,b,a/b);
    break;
    default:
    printf("choose correct option");
    break;
  }

  return 0;
}