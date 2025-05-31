#include<stdio.h>
int main()
{
    int x,prime=1,i=2;
    scanf("%d",&x);
    while(x%i==0 && i<=x)
    {
        prime=0;
        i++;
    }
    if(prime==0&&x!=2)
    {
        printf("Not Prime number");
    }
    else
    {
       printf("Prime number");
    }
}
