#include<conio.h>
#include<stdio.h>
#include<string.h>
//user defined structured
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    //initializing with multiple line

    /* 
    
    struct student ece[100];
    ece[0].roll=1664;
    ece[0].cgpa=9.2;
    strcpy(ece[0].name,"Durgesh");
    printf("\n roll number is: %d",ece[0].roll);
    printf("\n cgpa is: %f",ece[0].cgpa);
    printf("\n name is= %s",ece[0].name);


    */

//initalizing structure in single line

struct student s1={1001,9.5,"vijay"};
printf("student roll =%d\n",s1.roll);
    return 0;
}