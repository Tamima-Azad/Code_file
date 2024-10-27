
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>knight={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
pair<int,int>kstart, qEnd;
int dis[100][100];
char a[20][20];
bool valid(int i, int j,int n,int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int bfs(int n,int m,int ki, int kj,int qi,int qj)
{
    if(ki==qi && kj==qj) return 0;
    queue<pair<pair<int, int>,int>> q;
    bool vis[100][100];
    
    memset(vis, false, sizeof(vis));
 
    q.push({{ki,kj},0});
    vis[ki][kj] = true;
    dis[ki][kj] = 0;
    while (!q.empty())
    {
        pair<pair<int, int>,int> par = q.front();
        int a = par.first.first, b = par.first.second,step=par.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = a + knight[i].first;
            int cj = b + knight[i].second;
            if (valid(ci, cj,n,m) == true && vis[ci][cj] == false)
            {
                if(ci==qi&& cj==qj) return step+1;
                q.push({{ci, cj},step+1});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ki,kj,qi,qj; cin>>ki>>kj>>qi>>qj;
           memset(dis, -1, sizeof(dis));
         int step=bfs(n,m,ki,kj,qi,qj);
        cout<<step<<endl;
            //cout << dis[qi][qj]<<endl;
    }
    
    return 0;
}