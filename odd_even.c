#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter a number for check even or odd\n");
    scanf("%d",&num);
    //even for 1   odd for 0
    printf("%d",num%2==0);
    getch();
}