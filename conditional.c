#include<stdio.h>
#include<conio.h>
void main()
{
    int age,n; 
    //example of conditional operator
    printf("enter your age for cheking vote eligiblity: \n");
    scanf("%d",&age);
    if(age>=18)
    {
       
        printf("you are eligible for vote");
    }
    else
    {
printf("you are not eligible for vote\n");
    }
    // example of ternary operator
    age>=18 ? printf("\n You are Adult\n") : printf("You are not adult");
    getch();
}