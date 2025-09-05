#include<stdio.h>
void convertTemp(float c)
{
    float f;
    f=(c * 9/5) + 32;
    printf("the value in fehrenheit is: %.2f ",f);
}
int main()
{
    convertTemp(55);
    return 0;
}