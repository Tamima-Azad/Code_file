
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; scanf("%d",&n);
    int a[n][n],b[(n*n)],k=0;
    for(int i=1;;i++){
            if(i==1) continue;
        int flag=1;
        for(int j=2;j<=i/2;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1) {
            b[k]=i;
            k++;
        }
        if(k==n*n) break;
    }
    printf("\n\n");
    for(int i=0;i<n*n;i++){
        printf("%d ",b[i]);
    }
    int l=0,ii=0;
    for(int i=ii; ;i++){
        for(int j=0;j<n;j++){
           a[i][j]=b[l];
           l++;
        }
        ii++;
    }
    return 0;
}
