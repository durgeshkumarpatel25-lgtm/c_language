#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a number for reverse table\t ");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
        printf("%d \n",n*i);
    }
    getch();

}