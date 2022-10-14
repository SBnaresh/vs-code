#include<stdio.h>
  struct detailed
  {
    char name;
    int age;
    int aadhar;
    float hight;
    }s;
    int main()
    { 
printf("Enter The Information of Students :\n\n");
    
 printf("Enter Name : ");
    scanf("%c",&s.name);
    
 printf("Enter aadhaar. : ");
    scanf("%d",&s.aadhar);
    
    printf("Enter hight : ");
    scanf("%f",&s.hight);

printf("Enter age. : ");
    scanf("%d",&s.age);

  printf(" the age is%d\n",s.age);
  printf("the aadhar is %d\n",s.aadhar);
  printf("the hight is %f\n",s.hight);
  printf("the name is %c\n",s.name);
  printf("%d\n",sizeof(struct detailed));
  return 0;
    }
    