#include <stdio.h>

//call by value function declaring
void square(int n)
{
    n = n * n;
    printf("\n Square = %d", n);
}

//call by reference function declaring
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("\n Square = %d", n);
}

//call by value function calling
int main()
{
    int n=5;
    square(n);
    printf("\n number = %d", n);
    //call by reference function calling
    _square(&n); 
    return 0;
}
