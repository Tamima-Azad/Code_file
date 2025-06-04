#include<stdio.h>
int main()
{
    int m,n,flag=0,c=0;
    scanf("%d %d",&m,&n);
    if(m<n){
    for(int i=m;i<=n;i++){
        if(n%i!=0){
            flag=1;
            c++;
        }}

    }
    else if(m>n){
        for(int i=n;i<=m;i++){
            if(n%i==0){
                    flag=0;
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}

