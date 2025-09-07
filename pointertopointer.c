#include<stdio.h>
#include<conio.h>
void main()
{
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;
    printf("%p",&ptr);
    getch();
}