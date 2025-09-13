#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++) 
    {
        arr[n][i] = number * (i + 1); 
    }
}

int main()
{
    int tables[2][10];
    storeTable(tables, 0, 10, 2); // table of 2
    storeTable(tables, 1, 10, 3); // table of 3

    printf("Table of 2:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[0][i]);
    }

    printf("\n\nTable of 3:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[1][i]);
    }

    return 0;
}
