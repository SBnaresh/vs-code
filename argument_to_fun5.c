#include<stdio.h>
  struct airth
  {
   int a;
   int b;
   int result;
   };
  
  struct airth add(struct airth A)
   {
    A.result=A.a+A.b;
    printf("%d",A.result);
      }

int main()
   {
    struct airth A;
     A.a=10; A.b=20;
    int result;
    A=add(A);
return 0;
}