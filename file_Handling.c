#include<stdio.h>
#include<conio.h>
int main()
{

    // creating a text file
    FILE *fptr;
    fptr=fopen("test.txt","r");
// scanning and printing data from the text file
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n ",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n ",ch); 
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n ",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n ",ch); 
    fscanf(fptr,"%c",&ch);
    printf("Character= %c \n ",ch);


    //open in append mode it will write in file

    
     fptr=fopen("test.txt","a");

    printf("Character= %c \n ","H");
    printf("Character= %c \n ","e"); 
    printf("Character= %c \n ","l");
    printf("Character= %c \n ","l"); 
    printf("Character= %c \n ","o");
    fclose(fptr);
    return 0;
}