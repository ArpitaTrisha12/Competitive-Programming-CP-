#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>>a(n);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    int s;cin>>s;
    vector<int> d(n,INT_MAX);d[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;q.push({0,s});
    while(!q.empty()){
        auto [dist_u,u]=q.top();q.pop();
        if(dist_u>d[u])continue;
        for(auto [v,w]:a[u])
            if(d[u]+w<d[v]){d[v]=d[u]+w;q.push({d[v],v});} }
    for(int i=0;i<n;i++)cout<<(d[i]==INT_MAX?-1:d[i])<<" ";}
/*For the input:

5 6
0 1 2
0 2 4
1 2 1
1 3 7
2 4 3
3 4 1
0


The correct output is:

0 2 3 7 6*/
