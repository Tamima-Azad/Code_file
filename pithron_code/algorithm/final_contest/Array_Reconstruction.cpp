#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n-2];
        long long int s=0;
        for(int i=0;i<n-2;i++){
            cin>>a[i];
            s+=a[i];
        }
        long long int sum;cin>>sum;
        long long int x=sum-s;
        if(x==0) cout<<0<<endl;
        else cout<<x+1<<endl;
    }
    return 0;
}