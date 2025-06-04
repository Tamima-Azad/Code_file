
#include<stdio.h>
//#include<stdlib.h>+
//#include<string.h>
//#include<ctype.h>
#include<math.h>
int main(){
    int n, m, i, j, c=0;
    scanf("%d%d", &m, &n);
    int a[m], b[n];
    for(i=1; i<=m; i++) scanf("%d", &a[i]);
    for(i=1; i<=n; i++) scanf("%d", &b[i]);
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(a[i]==b[j]){
                c++;
            }
        }
    }
    if(c==n) printf("YES");
    else printf("NO");
}
