#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<=pow(10,5)&&a>=1&&b>=1&&b<=pow(10,5))
    {
        printf("%d",a-b);
    }
    return 0;
}
