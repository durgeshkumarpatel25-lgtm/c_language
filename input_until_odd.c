#include<stdio.h>
#include<conio.h>
void main()
{
int num;
do
{
    printf("Enter number until odd number \n");
    scanf("%d",&num);
} while (num%2==0);
printf("\n You enterd odd number ");
getch();
} 