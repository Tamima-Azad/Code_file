#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w%2==0 && w!=2 && w<=100 &&1<=w){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
