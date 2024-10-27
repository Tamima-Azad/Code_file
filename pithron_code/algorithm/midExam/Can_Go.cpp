// Some code

#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
const ll N = 1000000;
vector<pair<ll, ll>> v[N];
ll dis[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, ll> parent = pq.top();
        pq.pop();
        ll node = parent.first;
        ll cost = parent.second;
        for (pair<int, int> child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (int i = 1; i <=n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    ll source; cin>>source;
    dijkstra(source);
    int t;cin>>t;
    while(t--){
        ll dst,wc; cin>>dst>>wc;
        if(dis[dst]<=wc){
            cout<<"YES"<<endl;
        }else {
            cout<< "NO" << endl;
        }
    }
    return 0;
}