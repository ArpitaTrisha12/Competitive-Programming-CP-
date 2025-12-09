#include<bits/stdc++.h>
using namespace std;
int vis[1000];
vector<int> v[10000];
void dfs(int node){
vis[node]=1;
cout<<node<<"->";
for(int child:v[node]){
if(!vis[child])dfs(child);
}}
int main(){
int n,m,x,y;
cin>>n>>m;
while(m--){
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);}
for(int i=0;i<n;i++)//0 indexed {
if(!vis[i]){
dfs(i);
cout<<endl;}}
