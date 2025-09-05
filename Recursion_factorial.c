//Recursion function program of factorial
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factNm1=fact(n-1);//fact number minus 1
    int factN=factNm1*n;
    return factN;
}

int main()
{   int n;
    printf("enter a number for find factorial\n");
    scanf("%d",&n);
    printf("The factorial of %d is= %d",n,fact(n));
    return 0;
}