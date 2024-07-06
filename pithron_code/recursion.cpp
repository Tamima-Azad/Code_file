#include<stdio.h>
int recursion(int a[],int n,int i,int s){
    if(i==n) return s;
    s+=a[i];
    recursion(a,n,i+1,s);

}
int main()
{
    long long int n;
    scanf("%lld",&n);
     int a[n];
    long long int s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long int l=recursion(a,n,0,s);
    printf("%lld",l);

}
