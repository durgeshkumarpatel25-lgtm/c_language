#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int num;
    printf("Enter a number to know Fibonacci number: \n");
    scanf("%d", &num);

    printf("Fibonacci(%d) = %d\n", num, fib(num));

    return 0;
}
