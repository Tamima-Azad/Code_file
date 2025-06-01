#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%f %d",(float)a/(float)b,a%b);
    return 0;
}
