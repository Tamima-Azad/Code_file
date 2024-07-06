#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int m1,m2,d;
    while(t--){
        scanf("%d %d %d",&m1,&m2,&d);
        int r;
        r=d*m1;
        r=r/(m1+m2);
        printf("%d\n",d-r);
    }
}
