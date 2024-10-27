#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define ll long long
#define pb push_back
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    set<int> even, odd;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.insert(a[i]);
        else
            odd.insert(a[i]);
    }


    vector<int> e(even.rbegin(), even.rend());
    vector<int> o(odd.rbegin(), odd.rend());
    int max_even_sum = -1,sum=-1;

    if (e.size() >= 2) {
        max_even_sum = max(max_even_sum, e[0] + e[1]);
    }

    if (o.size() >= 2) {
        sum = max(sum, o[0] + o[1]);
    }

    if (max_even_sum != -1||sum!=-1) {
        cout << max(sum,max_even_sum) << endl;
    }
    else if(e.size()==1&&o.size()<2) cout<<e[0]<<endl;
    //else cout<<e[0]<<endl;

    return 0;
}
