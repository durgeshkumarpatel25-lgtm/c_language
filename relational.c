#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,x;
//relational operators
printf("%d\n",4>5);
printf("%d\n",20>=10 && 10<=50);
printf("%d\n",50<=100 || 25>50);   // if one condition will true even return true value
printf("%d\n",!(8>5));
printf("Enter a number\n ");
scanf("%d",&x);
printf("%d\n",x>9 && x<100); //if both condition will true then return 1 otherwise 0


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