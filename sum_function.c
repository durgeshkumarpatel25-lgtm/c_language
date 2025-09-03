#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
int c;
printf("Enter first number: \n");
scanf("%d",&a);
printf("Enter second number: \n ");
scanf("%d",&b);
c=a+b;
printf("The sum is = %d",c);
}

int main()
{
    int c=10,d=20;
    sum(c,d);
   return 0;
}
