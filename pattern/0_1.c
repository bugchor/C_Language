 #include<stdio.h>
int main()
{
  int a;
  printf("enter the number: ");
  scanf("%d",&a);
  int i=1;
  while(i<=a)
  {
    int j=1;
    while(j<=i)
    {
        if((i+j)%2==0)
        printf("1 ");
        else
        printf("0 ");
        j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}