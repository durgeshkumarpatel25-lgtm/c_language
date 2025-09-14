//Example of gets and puts gets means me input from the user and puts means print msg and also string lenth
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char fullName[100];
    gets(fullName);
    puts(fullName);
    // for string lenth
    printf("lenth is:%d ",strlen(fullName));
    char strFirst[100]="hello";
    char strSecond[]="world";

    // program for the add two string using concatination
    strcat(strFirst, strSecond);
    puts(strFirst);
    getch();
}