#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num;
    printf("Enter any number do you  want to print a table: \t ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",num*i);
    }
    getch();
}