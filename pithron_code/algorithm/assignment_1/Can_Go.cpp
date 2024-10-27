#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
pair<int,int>start, End;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m||vis[i][j]=='#'||a[i][j]=='#')
        return false;
    return true;
}
void dfs(int si, int sj)
{
    //cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='A') start={i,j};
            else if(a[i][j]=='B') End={i,j};
        }
    }
    int si=start.first;
    int sj=start.second;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    if(vis[End.first][End.second])
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}