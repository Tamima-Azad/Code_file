#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int x;cin>>x;
    
    while(x--){
        int a;cin>>a;

        sort(mat[a].begin(),mat[a].end(),greater<int>());
        if(!mat[a].empty()){
        for (int i = 0; i < mat[a].size(); i++){
        cout << mat[a][i] << " ";
        }
    cout<<endl;}
    else cout<<"-1"<<endl;
    }
    
    return 0;
}