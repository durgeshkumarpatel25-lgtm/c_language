//program using type def
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct employee
{
    int id;
    float salary;
    char name[100];
} emp ; //typedef
void main()
{ 
    //using singal line declaration and print
   emp e1={101,20000,"Durgesh"};
   printf("%d\n ",e1.id);       // employee id print
   printf("%f\n", e1.salary);  // salary print
   printf("%s\n", e1.name);    // name print

   // using multiple line declaration and print

   emp e2;
   e2.id=102;
   e2.salary=12500.00;
   e2.name;
   strcpy(e2.name,"Durgesh");

   //printing the data also we can print all data using the single line
   printf("\n \n  id= %d\n salary= %f\n name= %s",e2.id,e2.salary,e2.name);
getch();
}