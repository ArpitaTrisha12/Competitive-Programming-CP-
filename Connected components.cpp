//1 indexing
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10005];
int vis[10005];

void dfs(int node) {
    vis[node] = 1;
    for (int child : adj[node]) {
        if (!vis[child]) dfs(child);
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

    int components = 0;

    // 1-indexed loop
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            components++;
        }
    }

    cout << components << endl;
    return 0;
}
