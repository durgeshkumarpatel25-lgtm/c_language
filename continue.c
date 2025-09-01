//print all numbers from 1 to 10 except for 6
#include<conio.h>
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {   if(i==6)
        {
            continue;
        }
        printf("\n%d",i);
    }
getch();
}