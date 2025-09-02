#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter any anumber 1 to 7 to know week name:\n");
scanf("%d",&num);
switch(num)
{
case 1:
printf("Sunday\n ");
break;
case 2:
printf("momday\n");
break;
case 3:
printf("Tuesday\n");
break;
case 4:
printf("wednesday\n");
break;
case 5:
printf("Thrusday\n");
break;
case 6:
printf("Friday\n");
break;
case 7:
printf("Saturday\n");
break;
}
getch();
}