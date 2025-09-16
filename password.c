//enter your password and program will be add own password in your password after your password 123
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char pass[30];
    char word[]="123";
    printf("Enter your password: ");
    scanf("%s",pass);
    strcat(pass, word);
    // printing your new password
    printf("Final Password Is: %s",pass);
    getch();
}