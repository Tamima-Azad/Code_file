#include <bits/stdc++.h>
using namespace std;
const int N=1000;
bool vis[N][N];
int dis[N][N];
pair<int,int>parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
pair<int,int>start,End;
char a[N+1][N+1];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || a[i][j]=='#')
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                parent[ci][cj]={a,b};
            }
        }
    }
}
void pathPrint(){
    int p=End.first,q=End.second;
    while(make_pair(p,q)!=start){
             int ip=parent[p][q].first;
            int iq=parent[p][q].second;
        p=ip;
        q=iq;    
         a[p][q]='X';
            
       
    }
    a[start.first][start.second]='R';
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='R') start={i,j};
            else if(a[i][j]=='D') End={i,j};
        }
    }
    int si=start.first;
    int sj=start.second;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    if(vis[End.first][End.second]){
        pathPrint();
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
        cout<<endl;
    }
    
    return 0;
}