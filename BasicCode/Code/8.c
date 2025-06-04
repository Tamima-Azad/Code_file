#include<stdio.h>
int min(int a,int b,int c)
{
    int min=(a<b)?(a<c?a:c):(b<c?b:c);
    return min;
}
int main()
{
   int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
   printf("%d",min(x,y,z));
}
