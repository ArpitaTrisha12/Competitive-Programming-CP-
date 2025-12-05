#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
  cin >> n;
  int curr=0,ans=0; 
    while(n--){
        cin >> a >> b;
        curr = curr - a + b;
        ans = max(ans, curr);
    }
    cout << ans;
}
