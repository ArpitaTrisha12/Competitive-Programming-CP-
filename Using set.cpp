#include <bits/stdc++.h>
#include <set>
using namespace std;
int main() {
int n;
cin >> n;
set<int> s1;
for (int i = 0; i < n; i++) {
int x;
cin >> x;
s1.insert(x);
}
for (auto &x : s1)
cout << x << " ";
cout << endl;
return 0;
}
