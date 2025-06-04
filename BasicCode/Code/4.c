#include<stdio.h>
int digitrev(int a)
{
   static int s=0;

        if(a!=0)
        {
             s=s*10+a%10;
             digitrev(a/=10);

        }
        return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digitrev(n));
}

