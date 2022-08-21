// #include<stdio.h>
// int main()
// {
//   int n,sum=0;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         sum+=i;
//     }
//     printf("the sum is %d\n",sum);
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//   int n,sum=0;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//   printf("the sum is %d\n",sum);
//   return 0;
// }

 #include<stdio.h>
int main()
{
  int n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    do
    {
        sum+=i;
        i++;
    }while(i<=n);
  printf("the sum is %d \n",sum);
  return 0;
}
