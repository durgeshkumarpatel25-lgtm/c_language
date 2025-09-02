#include<conio.h>
#include<stdio.h>
void main()
{
    int i;
    printf("All odd numbers from 1 to 50 are \n");
    for(i=4;i<=50;i++)
    {
        if(i%2!=0)
        {
        printf("\n%d",i);    //also we can use i++ ans skip if
        }
    }
    getch();
}