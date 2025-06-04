#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[100][100];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j>=i)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("0\t");
            }


        }
        printf("\n");
    }

}
