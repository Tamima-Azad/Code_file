#include<stdio.h>
int fac(int a)
{
    int m=1;
    for(int i=1;i<=a;i++){
    m=m*i;
    }
    return m;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",fac(x));
}
