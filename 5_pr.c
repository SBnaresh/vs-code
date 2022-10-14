#include<stdio.h>
  #include<stdio.h>

  int main()
  {
    struct xyz{
        char * n;
        int year;
    };
    struct xyz x = {"phytec",2022};
    struct xyz y = x;
    printf("%d",printf("%s",y.n));
    return 0;
  }