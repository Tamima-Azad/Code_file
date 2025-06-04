#include<stdio.h>
int main(){
    int a, b,c=0,d,e;
    scanf("%d%d", &a, &b);
    if(a>b){
        d=a;
        a=b;
        b=d;
    }
    for(int x=a; x<=b; x++){
        int s=0;
        for(int y=2; y<x; y++){
            if(x%y==0){
                s++;
            }
        }
        if(s==0){
                c++;
            }
    }
    printf("%d", c);
}
