#include <stdio.h>
#include<conio.h>

void main()
{
    int n[2][2], i, j;
    
    printf("Enter four array elements:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &n[i][j]);
        }    
    } 
    
    printf("Your array elements are:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t", n[i][j]);
        } 
        printf("\n");
    }

    // second program
    int a[2][2] = {{10,20}, {30,40}};
    int l, m;

    printf("\nSecond program array elements are:\n");
    for(l=0; l<2; l++)
    {
        for(m=0; m<2; m++)
        {
            printf("%d\t", a[l][m]);
        }
        printf("\n");
    }
getch();
}
