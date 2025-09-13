#include<stdio.h>
void printString(char arr[])
{
for(int i=0; arr[i]!='\0'; i++)
{
    printf("%c", arr[i]);
}
printf("\n");
}

int main()
{
    char firstName[]="durgesh";
    char lastName[]="patel";
    printString(firstName);
    printString(lastName);
    //2nd option to print string and store
    char hello[]="hello world";
    printf("\n %s",hello);
    return 0;
}