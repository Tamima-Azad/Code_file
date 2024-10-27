#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h;  
    cin >> n >> h;
    vector<int> mnstrs(n);
    for (int i = 0; i < n; ++i) {
        cin >> mnstrs[i];
    }
    while (true) {
        bool x = true;
        for (int i = 0; i < n; ++i) {
            if (mnstrs[i] > 0) {
                mnstrs[i] -= 1; 
            }
            if (mnstrs[i] > 0) {
                x = false;
            }
        }
        if (x) {
            cout << "Hablu\n";
            return 0;
        }
        int m = 0;
        for (int i = 0; i < n; ++i) {
            if (mnstrs[i] > 0) {
                m = max(m, mnstrs[i]);
            }
        }

        h -= m;  
        if ( h< 1) {
            cout << "Dablu\n";
            return 0;
        }
    }

    return 0;
}
