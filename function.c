#include<stdio.h>
#include<conio.h>
void printHello();
void printGoodbye();
int main() //function calling

{
printHello();
printGoodbye();
return 0;
}

//function declaration
void printHello()
{
    printf("Hello\n");
}

void printGoodbye()
{
    printf("Good bye\n ");
}