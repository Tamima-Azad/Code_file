#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d\n%d %d",&x, &a, &b);
    if(x<=pow(10,5)&&x>=1&&a<=pow(10,5)&&a>=1&&b<=pow(10,5),b>=1)
    {
        if((a+b)<=x)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
