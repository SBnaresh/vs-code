#include<stdio.h>
   struct addition
   {
       int a; 
       int b; 
       int result;
 }s;
 int add(int a ,int b)
    {
        return a+b;
    }
    int main()
    {
     printf("enter two no ");
     scanf("%d %d",&s.a,&s.b);
     s.result=s.a+s.b;
     printf("the sum is =%d\n",s.result);
      return 0;
    } 
