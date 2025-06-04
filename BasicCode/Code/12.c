#include<stdio.h>
int sd(int x)
{
    int s=0,r;
    while(x!=0){
     r=x%10;
     s+=r;
     x/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sd(a));
}
