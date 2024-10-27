#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
       // int a[n];
        vector<int> a(n);
        unordered_set<int>s;
        int c= 0; 

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
       
            if (a[i] > n) {
                c++;
            } else {
                s.insert(a[i]);
            }
        }    
        int p = n - s.size();
        if (p <= k) {
            cout << "YES"<<'\n';
        } else {
            cout << "NO"<<'\n';
        }
    }

    return 0;
}