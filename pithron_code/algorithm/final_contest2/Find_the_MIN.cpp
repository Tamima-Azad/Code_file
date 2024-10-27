#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<ll> s;
    while (n--) {
        ll x;
        cin >> x;
        if (x == 1) {
            ll p;
            cin >> p;
            s.insert(p); 
        } 
        else if (x == 2) {
            if (!s.empty()) {
                auto f = s.begin(); 
                cout << *f << "\n";
                s.erase(f); 
            } 
            else 
                cout << "empty" << '\n';
            
        }
    }

    return 0;
}
