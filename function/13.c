//passing string as an argument
  
  #include<stdio.h>
  void modify(char *,char *);//function decleration pointer always point to first address of array
  int main()
  {
    char str1[]={"Amit"},str2[]={"RAj"};
    modify(str1,str2);

    return 0;
  }
  void modify(char *str,char *st)
  {
    int length=0;
    for(int i =0;str[i]!='\0';i++)
    {length+=1;}
        
        *st='r';
    printf("%d%c",length,*st);
      }