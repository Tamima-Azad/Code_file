#include<stdio.h>
int fib(int a)
{
    static int n=0,m=1;
    int c=n;
    n=m;
    m=c+m;
    if(n>=0)
    printf("%d ",m);
    if(a>0)return fib(a-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("0 1 ");
    fib(n-3);
}
