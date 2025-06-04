#include<stdio.h>
int rev(int x)
{
    int s,r;
    while(x!=0){
     r=x%10;
     s=s*10+r;
     x/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",rev(a));
}
