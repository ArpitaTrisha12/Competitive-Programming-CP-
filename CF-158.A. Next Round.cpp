#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans=0; cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int score = a[k-1];
    for(int x : a) if(x>=score && x>0) ans++;
    cout << ans;
}
