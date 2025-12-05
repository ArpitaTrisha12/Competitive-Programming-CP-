#include <bits/stdc++.h>
#include <map>
using namespace std;
int main() {
map<int, int> mp;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
int key;
cin >> key;
mp[key]++;
}
for (auto x : mp) {
cout << x.first << " -> " << x.second << " times" << endl;
}
return 0;
}
