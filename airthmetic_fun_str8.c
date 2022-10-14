#include<stdio.h>
    struct arith
    { 
        int a,b;
        int(*fnptr)(int,int)
        };
    int addition(int x,int y)
    
    {
        return x+y;
    }
    int subtration(int x, int y)
    {
        return x-y;
    }
    int main()
    {
     struct arith add,sub;
     printf("enter the value of a and b");
     scanf("%d %d",&add.a,& add.b);
        sub=add;
        add.fnptr = addition;
        sub.fnptr = subtration;
        printf("%d  airthmetic operation\n",add.fnptr(add.a,add.b));
         printf("%d  subtration operation\n",sub.fnptr(sub.a,sub.b));

    }