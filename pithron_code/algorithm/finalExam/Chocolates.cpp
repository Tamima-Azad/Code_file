#include<bits/stdc++.h>
using namespace std;
const int N=1e3+4;

// bool equalsum(int n,int a[],int ss){
//     if(ss<0||n==0) return false;
//     if(ss==0) return true;
//     if(dp[n-1][ss-a[n-1]]!=-1) return dp[n-1][ss-a[n-1]];
//     if(a[n-1]<=ss)
//     return dp[n-1][ss]=equalsum(n-1,a,ss-a[n-1])||equalsum(n-1,a,ss);
//     else return dp[n-1][ss];
// }
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        
        if(s%2) cout<<"NO"<<endl;
        else{
            
            int ss=s/2;
            bool dp[ss];
            dp[0]=true;
            for(int i=1;i<=ss;i++){
                dp[i]=false;
            }
            for(int i=0;i<n;i++){
            for(int j=0;j<=ss;j++){
                
                if(a[i]<=j) dp[j]=dp[j]||dp[j-a[i]];
            }
            }
            if(dp[ss]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}