#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++){
            //printf("*");
            printf("%d ",j);
        }
        printf("\n");
        k++;
    }*/
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>=1;j--){
             //printf(" *");
             printf("%d ",j);
        }
         printf("\n");
    }
}