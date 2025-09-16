//this program will check in a string how many vovel are
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[]="patel";
int count=0;
int i;
printf("Enter a string for cheking a how many vowels: ");
for(i=0; name[i]!='\0';i++)
{
 if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
 {
    count++;
 }
}
printf("Total vowel is: %d",count);
getch();
}


