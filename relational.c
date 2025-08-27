#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("%d",4>5);
//Now check the greatest between two number
printf("\n\n Enter the first number: \n");
scanf("%d",&a);
printf("Enter the Second number: \n");
scanf("%d",&b);
if(a>b)
{
    printf("%d is greatest number\n",a);
}
else
{
    printf("%d is greatest number\n",b);
}
getch();
}