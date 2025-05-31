#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180 && a>0 && b>0 && c>0)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
    return 0;
}
