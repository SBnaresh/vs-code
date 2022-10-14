#include<stdio.h>
#pragma pack(1);
   struct date 
   {
    
   unsigned int a:4;
      unsigned char ch:1;
   }D={10,'A'};
   int main()
   {
    printf("%d",sizeof(D));
   // printf("%u",&D);
    return 0;
   }

   