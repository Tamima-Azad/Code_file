#include<stdio.h>
int mx(int a,int b,int c)
{
    int mx=(a>b)?(a>c?a:c):(b>c?b:c);
    return mx;
}
int main()
{
   int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
   printf("%d",mx(x,y,z));
}

