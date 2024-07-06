#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int l=n/2;
    int s=1+l+5,k=1;
    for(int i=1;i<=(2*s)-1;i++){
        for(int j=s-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
                printf("*");
        }
        k+=2;
        printf("\n");
    }
}
