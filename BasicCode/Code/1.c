#include<stdio.h>
int main()
{
    int a1,b1,a2,b2;
    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
    int m[100][100],n[100][100],r[100][100];


        for(int i=0;i<a1;i++)
        {
            for(int j=0;j<b1;j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
        for(int i=0;i<a2;i++)
        {
            for(int j=0;j<b2;j++)
            {
                scanf("%d",&n[i][j]);
            }
        }int s;
        for(int i=0;i<a1;i++)
        {
            for(int j=0;j<b2;j++)
            {
                s=0;
                for(int k=0;k<b1;k++)
                {
                    s=s+(m[i][k]*n[k][j]);
                     r[i][j]=s;
                }

                printf("%d ",r[i][j]);
            }
            printf("\n");
        }

}
