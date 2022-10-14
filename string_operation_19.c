#include<stdio.h>
 int main()
 {
      char str1[20]="nareshmeghwal";
      char str2[25]={"sdi bhubaneswar"};
      char str3[25];
      
      printf("the length is string is :%d\n",strlen(str1));
       printf("the length is string is :%d\n",strlen(str2));
        if (strcmp( str1,str2)==0)
        {
           printf(" str1 and str2  is equal");
        }
        else {
         printf("str 1 is not equal to str2 ");
        }                
        strcpy(str3,str2);
        printf("\n%s",str3);

      return 0;
      }