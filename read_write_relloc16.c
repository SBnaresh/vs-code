#include<stdio.h>
#include<stdlib.h>
void main()
    {
        int i ,*p,n,temp;
        printf("\n enter how many element :");
        scanf("%d",&n);
        p=(int*)malloc(n*sizeof(int));
        if(p==NULL)
        {
            fprintf(stderr,"/Fall to alloct memory /n");
            exit(1);
            }
         printf("/n Memory allocated at : %x",p);
           for(i=0;i<n;i++)
             p[i]=i+1;
             printf("\n");
             for(i=0;i<n;i++)
                 primtf("%d",p[i]);
                 printf("\n");
                 temp  = relloc(p,(n*sizeof(int))+10);
                 //memset(p+n,0sizeof(int)*n);
                 p=temp;
                 n+=10;
                 for(i=0;i<n;i++)
                 printf("%d\n",p[i]);
                 printf("\n");
    }