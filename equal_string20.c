#include<stdio.h>
 int main()
  {
char s1[30]={"Nareshmeghwal"};
char s2[30];
printf("enter the input string");
scanf("%s",&s2);
  if(strcmp(s1,s2)==0)
     {
        printf("hello,,.. congratulation");
      }
      else
      {
        printf("sorrry better luck next time");
      }
return 0;
}


