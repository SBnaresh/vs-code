#include<stdio.h>
  union student
  { 
    char name;
    int age;
    int id;
};
 int main()
 {
     union student s;    
 /*printf("Enter Name : ");
    scanf("%s",&s.name);
    
 printf("Enter  id No. : ");
    scanf("%d",&s.id);
    
    printf("Enter age : ");
    scanf("%f",&s.age);

    printf("Name: %c\n",s.name);
    printf("id: %d\n",s.id);
    printf("age: %d\n",s.age);*/
    printf("%d",sizeof(s));
    return 0;
}


 