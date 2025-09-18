//This program will take  the five person address and print all person address 
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct address{
    int houseNo;
    char block[20];
    char city[30];
    char state[30];
};

int main()
{
    struct address adds[5];
    //input 
    printf("\n \n Enter info for person 1  houseNo block  city  state : ");
    scanf("%d",&adds[0].houseNo);
    scanf("%s",adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);


    printf("\n \n  Enter info for person 2  houseNo block  city  state : "); 
    
    scanf("%d",&adds[1].houseNo);
    scanf("%s",adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("\n \n  Enter info for person 3  houseNo block  city  state : "); 
    
    scanf("%d",&adds[2].houseNo);
    scanf("%s",adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("\n \n  Enter info for person 4  houseNo block  city  state : "); 
    
    scanf("%d",&adds[3].houseNo);
    scanf("%s",adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("\n \n  Enter info for person 4  houseNo block  city  state : "); 
    
    scanf("%d",&adds[4].houseNo);
    scanf("%s",adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);


printf("\n Five person details are:\n ");

printf("\n \n 1st person Address Details House No  block  city  state");

printf("\n house No %d",adds[0].houseNo);
printf("\n block %s",adds[0].block);
printf("\n City  %s",adds[0].city);
printf("\n State %s",adds[0].state);


printf("\n \n 2nd person Address Details House No  block  city  state");

printf("\n house No %d",adds[1].houseNo);
printf("\n block %s",adds[1].block);
printf("\n City  %s",adds[1].city);
printf("\n State %s",adds[1].state);

printf("\n \n 3rd person Address Details House No  block  city  state");

printf("\n house No %d",adds[2].houseNo);
printf("\n block %s",adds[2].block);
printf("\n City  %s",adds[2].city);
printf("\n State %s",adds[2].state);

printf("\n \n 4th person Address Details House No  block  city  state");

printf("\n house No %d",adds[3].houseNo);
printf("\n block %s",adds[3].block);
printf("\n City  %s",adds[3].city);
printf("\n State %s",adds[3].state);

printf("\n \n 5th person Address Details House No  block  city  state");

printf("\n house No %d",adds[4].houseNo);
printf("\n block %s",adds[4].block);
printf("\n City  %s",adds[4].city);
printf("\n State %s",adds[4].state); 
return 0;
}