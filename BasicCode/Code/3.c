#include<stdio.h>
int digitsum(int a)
{
   static int s=0;

        if(a!=0)
        {
             s=s+a%10;
             digitsum(a/=10);

        }
        return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitsum(n));
}
