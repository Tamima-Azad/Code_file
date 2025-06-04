
#include<stdio.h>
int digitcount(int a)
{
   static int s=0;

        if(a!=0)
        {
             s=s+a%10;
             digitcount(a/=10);
        }
        return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitcount(n));
}
