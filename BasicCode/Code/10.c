#include<stdio.h>
int mid(int a,int b,int c)
{
    int mid=(a>b)?(b>c?b:a>c?c:a):(a>c?a:b>c?c:b);
    return mid;
}
int main()
{
   int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
   printf("%d",mid(x,y,z));
}


