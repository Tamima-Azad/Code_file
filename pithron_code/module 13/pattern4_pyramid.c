#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int l=n/2;
    l=l+6;
    int s=l-1,k=1;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k=k+2;

        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
