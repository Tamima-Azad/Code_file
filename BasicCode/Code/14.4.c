#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
