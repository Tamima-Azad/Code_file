#include<stdio.h>
int mx(int x,int y)
{
    if(x>y) return x;
    else return y;
}
    int main()
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int max=mx(a,b);
        printf("%d",max);
    }

