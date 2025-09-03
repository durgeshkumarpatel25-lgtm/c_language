#include <stdio.h>

int printTable(int a)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d \n", a*i);
    }
    return 0;
}

int main()
{
    int a;
    printf("Enter any number you want to print table:\n");
    scanf("%d", &a);
    printTable(a);
    return 0;
}
