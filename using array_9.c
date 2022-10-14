#include<stdio.h>
    struct arith
    { 
        int a,b;
        int(*fnptr[])(int,int)
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
       int i;
       for(i=0;i<2;i++){
     printf("enter the value of a and b");
     scanf("%d %d",&add.a,& add.b);
        sub=add;
        add.fnptr[i] = addition;
        sub.fnptr[i] = subtration;
        printf("%d  airthmetic operation\n",add.fnptr[i](add.a,add.b));
         printf("%d  subtration operation\n",sub.fnptr[i](sub.a,sub.b));
            }
            return 0;
    }