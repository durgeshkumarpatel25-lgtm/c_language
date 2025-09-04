//in this program you will enter a number then this program will generate hello world
#include<stdio.h>
#include<conio.h>
void printHW(int num)
{   if(num==0)
   {
        return;
    }
    printf("Hello World\n");
    printHW(num-1);
}

int main()
{
    int v;
    printf("Enter number of times do you want to print hello world");
    scanf("%d",&v);
    printHW(v);
    return 0;
}