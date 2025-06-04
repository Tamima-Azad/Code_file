#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        int x;
        for(int j=1;j<=10;j++)
        {
            x=i*j;
            printf("%d*%d=%d ",i,j,x);
        }
        printf("\t\n");

    }
    return 0;
}
