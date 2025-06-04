#include<stdio.h>
int main()
{
    int n,b;
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
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
    printf("Largest Numnber = %d",arr[n-1]);
}
