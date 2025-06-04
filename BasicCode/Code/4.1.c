#include<stdio.h>
int main()
{
    int a[100][100],r,det;
    scanf("%d ",&r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<r;i++)
    {

        det=(a[0][0]*(a[2][2]*a[1][1]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
    }
    printf("%d",det);


}

