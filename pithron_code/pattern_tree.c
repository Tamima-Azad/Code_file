#include<stdio.h>
#include<string.h>
int main(){
    int n; scanf("%d",&n);
    int c = 1;
    for(int i = (2*5 + n + 1)/2; i > 0; i--){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int j = 1; j <= c; j++){
            printf("*");
        }
        printf("\n");
        c = c + 2;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)printf(" ");
        for(int j = 0; j < n; j++)printf("*");
        printf("\n");
    }


    return 0;
}
