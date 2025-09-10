#include<stdio.h>
//function for reverse number
void reverse(int arr[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
}

//function for print arry
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    
    }
    printf("\n");
}

//calling both function
int main()
{
    int arr[]={55,64,88,21,22,100};
    reverse(arr,6);
    printArr(arr,6);
    return 0;
}