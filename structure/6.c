// padding and packing in structure


// packing 
// #include<stdio.h>
// #pragma pack(1)// used for packing
// struct student{
//     int a;
//   char name;
   
// };
// int main()
// {
//     struct student s;
//     printf("%d\n",sizeof(s)); 
  
//   return 0;
// }
//padding 
#include<stdio.h>
struct student{
    int a;
  char name;
   
};
int main()
{
    struct student s;
    printf("%d\n",sizeof(s)); 
  
  return 0;
}


