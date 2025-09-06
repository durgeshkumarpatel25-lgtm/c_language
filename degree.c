#include<stdio.h>
void convertTemp(float c)
{
    float f;
    f=(c * 9/5) + 32;
    printf("the value in fehrenheit is: %.2f ",f);
} 
int main()
{
    float c;
    printf("Enter the celsius value:  ");
    scanf("%f",&c);
    convertTemp(c);
    return 0;
}