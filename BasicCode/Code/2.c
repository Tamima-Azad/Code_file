#include<stdio.h>
int main()
{
    int ind,v,n;
    int a[100];
    scanf("%d %d",&ind,&v);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        printf("index = %d value = %d ",i,a[i]);
    }
    printf("\n \n");
    for(int i=n-1;i>ind;i--)
    {
        a[i+1]=a[i];
    }
    a[ind]=v;
    for(int i=0;i<n;i++)
    {
        printf("index =%d value = %d ",i,a[i]);
    }
}
