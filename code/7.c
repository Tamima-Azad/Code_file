#include<stdio.h>
int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    p=p+q;
    q=p-q;
    p=p-q;
    printf("%d %d",p,q);
    return 0;

}
