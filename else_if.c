#include<stdio.h>
#include<conio.h>
void main()
{
    //This program for check your Grade by your number
    float num;
    printf("Enter your percentage to check your grade: \n");
    scanf("%f",&num);
    if(num>=90)
    {
        printf("A grade\n");
    }
    else if(num>=80)
    {
        printf("B grade\n");
    }
    else if(num>=60)
    {
        printf("C grade\n");
    }
    else if(num>=40)
    {
        printf("D grade\n");
    }
    else
    {
    printf("You are under supply\n");
    }
    getch();
}