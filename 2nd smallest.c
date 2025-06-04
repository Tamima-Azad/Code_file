#include<stdio.h>
int main()
{
    int t;
    float n[20];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%f",&n[i]);

    }
    float s;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(n[i]<n[j]){
           s=n[i];
           n[i]=n[j];
           n[j]=s;
            }
        }
    }

    printf("%.1f ",n[1]);
    return 0;
}
