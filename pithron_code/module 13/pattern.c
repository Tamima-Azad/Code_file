#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        int kk=k;
        for(int j=1;j<=k;j++){
            printf("%d",kk);
            kk--;
        }
        printf("\n");
        s--;
        k++;
        kk=k;
    }
}
