#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n&1==0)?printf("%d is even",n)
    : printf("%d is odd",n);
}
