// Some code
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll INF = LLONG_MAX;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INF;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (adj[i][k]!=INF and adj[k][j]!=INF and adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    ll q; cin >> q;
    while(q--){
        int src,dst; cin >> src >> dst;
        if(adj[src][dst]==INF) cout<< -1 << endl;
        else cout << adj[src][dst] << endl;
    }
    return 0;
}