#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt[7]={0};
    for(int i=0;i<n;i++){
        int val=a[i];
        cnt[val]++;
    }
    for(int i=0;i<=6;i++){
        cout<<i<<" "<<cnt[i]<<endl;
    }


}

