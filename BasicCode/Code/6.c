#include<stdio.h>
int a(int w,int l)
{
    return w*l;
}
int main()
{
    int w,l;
    scanf("%d %d",&w,&l);
    printf("%d",a(w,l));
}
