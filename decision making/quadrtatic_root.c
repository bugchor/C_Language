#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
     printf("enter the value as a return b return c return:\n");
     scanf("%d %d %d",&a,&b,&c);
     if(a!=0)
     {
        d=((b*b)-4*a*c);
        if(d==0)
            {
                r1= -b/(2*a);
                r2=-b/(2*a);
            }
        else if(d>1)
            {
                r1=(-b+sqrt(d))/2*a;
                r2=(-b-sqrt(d))/2*a;
            }
        else
            {
                r1= -b/(2*a);
                r2=(-b-sqrt(d))/2*a;
            }
     }
printf("the roots of quadratic equation is %.2f  %.2f",r1,r2);
  return 0;
}
