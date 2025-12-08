#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
vector<int> g[MAXN];
bool vis[MAXN];

void dfs(int u) {
    vis[u] = true;
    cout << u << "->";
    for (int v : g[u])
        if (!vis[v])
            dfs(v);
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x); // remove this line if directed
    }

    for (int i = 1; i <= n; i++)
        if (!vis[i])
            dfs(i);

    cout << endl;
}
