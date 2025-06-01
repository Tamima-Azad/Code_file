#include<bits/stdc++.h>
using namespace std;
const int N = 1001;  // Adjust size for 1-based indexing

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, e;
        cin >> n >> e;
        
        vector<int> adj[N];  // Adjacency list for each test case
        bool vis[N] = {false};  // Visited array
        long long int dis[N];  // Distance array
        
        // Initialize distance array
        for (int i = 1; i <= n; i++) {
            dis[i] = INT_MAX;
        }
        
        // Input edges
        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        int sr;
        cin >> sr;  // Source node
        
        // BFS setup
        queue<int> q;
        q.push(sr);
        dis[sr] = 0;
        vis[sr] = true;
        
        // BFS traversal
        while (!q.empty()) {
            int f = q.front();
            q.pop();
            
            for (auto child : adj[f]) {
                if (!vis[child]) {
                    vis[child] = true;
                    q.push(child);
                    dis[child] = dis[f] + 6;  // Each edge has weight 6
                }
            }
        }
        
        // Output distances
        for (int i = 1; i <= n; i++) {  // Loop through all nodes
            if (i != sr) {  // Don't print distance for the source itself
                if (dis[i] == INT_MAX) {
                    cout << -1 << " ";  // Node not reachable
                } else {
                    cout << dis[i] << " ";  // Shortest distance
                }
            }
        }
        cout << endl;  // End of test case
    }
    
    return 0;
}
