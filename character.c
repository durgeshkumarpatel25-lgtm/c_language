#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter a character to check uppercase or not: ");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
{
    printf("Upper case\n");
}
else if(ch>='a' && ch<='z')
{
    printf("Lower case\n");
}
else
{
printf("Not a character");
}
getch();
}