#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("The sum of %d+%d is= %d \n",a,b,a+b);
    printf("The subtraction of %d-%d is= %d \n",a,b,a-b);
    printf("The multiplication of %d*%d is= %d \n",a,b,a*b);
    printf("The division of %d/%d is= %d \n",a,b,a/b);
    printf("The module division of %d module %d is= %d \n",a,b,a%b);
    getch();
}