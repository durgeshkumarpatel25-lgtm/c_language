#include<stdio.h>
#include<conio.h>
void main()
{
int r,i,j,space;
printf("Enter the no of rows: ");
scanf("%d", &r);
for(i=1;i<=r;i++)
{
for(space=1;space<=r-i;space++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
for(i=r-1;i>=1;i--)
{
for(space=1;space<=r-i;space++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
getch();
}