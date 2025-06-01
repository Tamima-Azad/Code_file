#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<pair<int,int>>adj[N];
int dis[N];
bool vis[N];
int main(){
    int n,e;cin>>n>>e;
    int s;cin>>s;
    
    while(e--){
        int u,v,c;cin>>u>>v>>c;
        adj[u].push_back({v,c});
    }
    for(int i=1;i<=n;i++){
        dis[i]=INT_MAX;
    }
    priority_queue<pair<int,int>>pq;
    pq.push({0,s});
    dis[s]=0;
    while(!pq.empty()){
        pair<int,int>f=pq.top();
        pq.pop();
        int node=f.second;
        int cost=f.first;
        for(auto i:adj[node]){
                int cn=i.second;
                int cc=i.first;
                if(dis[cc]==INT_MAX&&dis[cn]>cc+cost){
                    dis[cn]=cc+cost;
                    pq.push({dis[cn],cn});
                }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }

}