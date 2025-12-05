#include <bits/stdc++.h>
using namespace std;
int main(){
int t; cin >> t;
while(t--){
int a,b,c,d;
  cin >> a >> b >> c >> d;
int ans = (b>a) + (c>a) + (d>a);
cout << ans << "\n";
    }
}
