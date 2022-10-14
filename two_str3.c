#include<stdio.h>
   struct student
   {
    int id;
    char name;
    float hight
    }std;
     struct marks
     {
   int maths;
   int phy;
   int chem;
     }mar;
       int main()
       {
       
   printf("enter student id");
   scanf("%d",&std.id);
   printf("enter student name");
   scanf("%c",&std.name);
   printf("enter student hight");
   scanf("%f",&std.hight);
   
   printf("enter student marks is maths");
   scanf("%d",&mar.maths); 
   printf("enter student marks is phy");
   scanf("%d",&mar.phy); 
   printf("enter student mark is chem");
   scanf("%d",&mar.chem);

   printf("%d\n",&std.id); 
   printf("%c\n",&std.name);
   printf("%f\n",&std.hight);
   printf("the size is %d\n",sizeof(std));
    
    printf("%d\n",&mar.maths); 
    printf("…