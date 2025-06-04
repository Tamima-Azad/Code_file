#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,sum=0;
    printf("Enter row & column for a matrix = ");
    scanf("%d %d",&m1,&n1);
    printf("Enter row & column for b matrix = ");
    scanf("%d %d",&m2,&n2);
    int a[100][100],b[100][100],c[100][100];
    printf("Enter 1st matrix :\n");
    if(n1==m2){
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }printf("Enter 2nd matrix :\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }} printf(" Result matrix : \n");
    for(i=0;i<m1;i++)
    {
        printf("\t");
        for(j=0;j<n2;j++)
        {
            for(int k=0;k<n1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
            sum=0;
        }printf("\n");
    }}}
