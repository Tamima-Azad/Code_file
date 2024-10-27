#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a;
int dp[N];
bool makeit(int x){
    if(x==a) return true;
    if(x>a) return false;
    if(dp[x]!=-1) return dp[x];
    return dp[x]=makeit(x*2)||makeit(x+3);
}
int main(){
    int n;cin>>n;
    
    while(n--){
        cin>>a;
    for(int i=0;i<N;i++){
        dp[i]=-1;
    }
        if(makeit(1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}