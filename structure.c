#include<stdio.h>
#include<conio.h>
#include<string.h>
// declaring of a structure
    struct student
    {
        int roll;
        float cgpa;
        char name[100];
    };

//structure defination

void main()
{
    //Student 1
    struct student s1;
    s1.roll=101;
    s1.cgpa=9.5;
    strcpy(s1.name,"Durgesh");
    printf("Student roll no.  %d",s1.roll);
    printf("\n Student cgpa.  %f",s1.cgpa);
    printf("\n Student name  %s",s1.name);

    //Student 2
    struct student s2;
    s2.roll=102;
    s2.cgpa=9.6;
    strcpy(s2.name,"Sugan");
    printf("\n Student roll no.  %d",s2.roll);
    printf("\n Student cgpa.  %f",s2.cgpa);
    printf("\n Student name  %s",s2.name);

    //Student 2
    struct student s3;
    s3.roll=103;
    s3.cgpa=9.6;
    strcpy(s3.name,"Vijay");
    printf("\n Student roll no.  %d",s3.roll);
    printf("\n Student cgpa.  %f",s3.cgpa);
    printf("\n Student name  %s",s3.name);
getch();
}