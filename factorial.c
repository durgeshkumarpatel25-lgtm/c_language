//program to find the factorial of any number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n, fact=1;
    printf("Enter a number do you want factorial  \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\n the factorial is = %d",fact);
    getch();
}