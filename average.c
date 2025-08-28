#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,average;
    printf("Enter the three numbers:\n");
    scanf("%f %f %f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("The average of three number of: %f\n",average);
    getch();
}