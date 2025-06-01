#include<stdio.h>
int main()
{
    int a,i,j,b[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
