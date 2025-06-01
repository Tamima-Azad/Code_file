#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>=b && c>=a && (a+b)>c)
    {
        printf("Triangle is valid");
    }
    else if(b>=c && b>=a && (c+a)>b){
        printf("Triangle is valid");
    }
    else if(a>=b && a>=c && (b+c)>a){
        printf("Triangle is valid");
    }
    else {
        printf("Triangle is invalid");
    }
    return 0;
}
