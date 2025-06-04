#include<stdio.h>
int main()
{
    int ind,n;
    int a[100];
    scanf("%d ",&ind);
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        printf("index = %d value = %d \n",i,a[i]);
    }
    printf("\n \n");
    for(int i=ind;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    //a[ind]=v;
    for(int i=0;i<n-1;i++)
    {
        printf("index =%d value = %d \n",i,a[i]);
    }
}

