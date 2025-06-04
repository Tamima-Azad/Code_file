#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    printf("Smallest Numnber = %d\nLargest Number = %d",arr[0],arr[n-1]);
}

