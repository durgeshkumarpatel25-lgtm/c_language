#include<stdio.h>
#include<conio.h>
int main()
{
    int age=21;
    int *ptr=&age;
    int _age=*ptr;
    printf("value is %d\n",_age);
    printf("address is %p\n",&age);
    printf("%p\n",&ptr);
    return 0;
}