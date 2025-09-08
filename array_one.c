//one dimentional array
#include<stdio.h>
#include<conio.h>
//first program taking array elements from user
void main()
{
    int n[5],i;
    printf("Enter five array elements:\n ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }     
    printf("Your array elements are: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",n[i]);
    } 
    //second program
    
    int a[5]={10,20,30,40,50},j;
    printf("\n second program Array elements are: \n");
    for(j=0;j<5;j++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
