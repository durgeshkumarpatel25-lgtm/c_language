#include<stdio.h>
#include<conio.h>

struct vector{
    int x;
    int y;

};


void calsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;

    printf("Sum of X is : %d\n ",sum.x);
    printf("sum of Y is: %d",sum.y);
}
int main()
{
struct vector v1={5,10};
struct vector v2={3,8};
struct vector sum={0};
calsum(v1,v2,sum);
return 0;
}