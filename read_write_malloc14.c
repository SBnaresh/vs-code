#include<stdio.h>
#include<stdlib.h>
void main()
    {
        int i ,*p;
        p=(int*)malloc(5*sizeof(int));
        for(i=0;i<10;i++)
        *p=p[i]+1;
        printf("%p",p);
         

    }