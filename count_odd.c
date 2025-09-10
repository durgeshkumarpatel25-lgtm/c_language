#include<stdio.h>
int countOdd(int arr[] ,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[]={10,20,30,55,54,54,5,20};
    printf("%d",countOdd(arr,8));
    return 0;
}