#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0) printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
