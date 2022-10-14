#include<stdio.h>
struct std
{
int roll;
char *name;

}a[3];
void display(struct std[2]);
    void main()
    {
     a[0].roll=1;
     a[0].name="naresh";
     a[1].roll=2;
     a[1].name="hiii";
     a[2].roll=3;
     a[2].name="hello";
     display(a);
}
   void display(struct std a[])  
{
    int i;
   for(i=0;i<3;i++)
   {
    printf("\nroll no is:%d name is %s\n",a[i].roll,a[i].name);
   }

}

   