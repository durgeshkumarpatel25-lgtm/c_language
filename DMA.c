#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr=(float *) malloc(5 * sizeof(float));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=7;
    ptr[3]=7;
    ptr[4]=5;
    ptr[5]=6;
    for(int i=0;i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }
    return 0;
}