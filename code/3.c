#include<stdio.h>
int main()
{
    int p,q,r;
    scanf("%d %d %d", &p, &q, &r);
    if(p+q==r||r+q==p||p+r==q){
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}
