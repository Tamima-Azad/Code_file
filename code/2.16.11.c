#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a-b;
        printf("profit=%d",c);
    }
    else if(a<b){
        c=b-a;
        printf("loss=%d",c);
    }
    else
        printf("no profit no loss.");
    return 0;
}
