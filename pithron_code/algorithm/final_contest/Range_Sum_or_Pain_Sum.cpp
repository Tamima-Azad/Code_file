#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll  n, q;
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        ll l, r;
        cin >> l >> r;
        ll x, y;
        ll f = 0;
        ll ff = 0;
        if(l % 2 == 0){
            x = l/2;
            f = x;
            x++;
            
        }
        else{
            x = (l/2) + 1;
        }
        if(r%2 != 0){
            y = (r/2) + 1;
            ff = y;
            y--;
        }
        else{
            y = r/2;
        }
        ll sum = y * (y + 1) / 2;
        sum = sum - ((x-1) * x/2);
        //sum *= 2;
        cout << 2*sum + f + ff << endl;
    }
    return 0;
}