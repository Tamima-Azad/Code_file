#include<stdio.h>
int digitcount(int a)
{
   static int c=0;
        if(a!=0)
        {
             c++;
             digitcount(a/=10);
        }
        return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitcount(n));
}
