#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x; scanf("%d",&x);
    int f=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                f=1;
               // printf("Yes");
                break;
            }
            //printf("%d %d\n",a[i],a[j]);
        }
    }
    if(f==0) printf("NO");
    else printf("YES");
}