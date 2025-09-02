#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,num;
    printf("enter any number do you want to perform sum of all naturam number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("\n the sum of natural number is:  %d",sum);
//for the reverse
printf("\n reverse numbers are");
for(int i=num;i>=1;i--)
{
    printf("\n %d",i);
}
getch();
}