#include <stdio.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int c=0,cc=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i==j)||(i+j)==(n-1)){
                if(a[i][j]==1) c++;
            }
            else if(a[i][j]==0) cc++;
        }
    }
    //printf("%d %d\n",c,cc);
    if(n%2==0){
        if(c==(m+n)&&cc==((n*m)-m-n)&&m==n||cc==m*n) printf("YES\n");
        else printf("NO\n");
    }
    else{
        if(c==((2*n)-1)&&cc==((n*m)+1-m-n)&&n==m||cc==n*m) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
