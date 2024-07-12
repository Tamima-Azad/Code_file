#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    stack<int>a;
    queue<int>b;
    for(int i=0;i<n;i++){
        int values;cin>>values;
        a.push(values);
    }
    for(int i=0;i<n;i++){
        int values;cin>>values;
        b.push(values);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a.top()==b.front())
        cnt++;
        a.pop();
        b.pop();
    }
    if(n==m&&cnt==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}