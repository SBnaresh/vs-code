#include<stdio.h>
#include<stdlib.h>
void main()
    {
        int i ,*p,n;
        printf("\n enter how many element :");
        scanf("%d",&n);
        p=(int*)malloc(n*sizeof(int));
        if(p==NULL)
        {
            fprintf(stderr,"/Fall to alloct memory /n");
            exit(1);
            }
         printf("/n Memory allocated at : %x",p);
         printf("\n intial values \n");
         for(i=0;i<n;i++)
           printf("%d",p[i]);
           for(i=0;i<n;i++)
           p[i]=i+1;
           printf("\n");
           for(i=0;i<n;i++)
           printf("%d",p[i]);
           printf("\n")
    }