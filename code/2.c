#include<stdio.h>
int main()
{
    int x,y,a,b,d,t;
    scanf("%d %d %d %d\n%d %d",&x,&y,&a,&b,&d,&t);
    if(d>=x&&d<=y&&t>=a&&t<=b){
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}
