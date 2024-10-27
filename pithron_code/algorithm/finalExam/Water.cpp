#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n],mx=-1;
        ll dp[3];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            if(a[i]==mx) dp[0]=i;
        }
        a[dp[0]]=-1;
        mx=-1;
        for(ll i=0;i<n;i++){
            mx=max(mx,a[i]);
            if(a[i]==mx) dp[1]=i;
        }
        sort(dp,dp+2);
        cout<<dp[0]<<" "<<dp[1]<<endl;
    }
}