#include<stdio.h>
int findoddOccuring(int arr[],int n)
{
    int xor = 0;
    for(int i = 0; i < n; i++) {
        xor = xor ^ arr[i];
    }
    return xor;
}
int main()
{
    int arr[] = { 4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occurring elements is %d", findoddOccuring(arr, n));
    return 0;
}
