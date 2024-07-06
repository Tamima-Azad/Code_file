#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int x,f=0;
        scanf("%d",&x);
        for(int i=0;i<n;i++){
            if(x==a[i]){
                f=1;
                printf("YES\n");
                break;
            }
        }
        if(f==0) printf("NO\n");
    }
}
