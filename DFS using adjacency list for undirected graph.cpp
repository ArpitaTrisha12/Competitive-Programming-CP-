#include <bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int> adj[10000];
void dfs(int node) {
    vis[node] = 1;
    cout << node << " -> ";

    for (int child : adj[node]) {
        if (!vis[child]) {
            dfs(child);
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    cout << endl;
    return 0;
}
