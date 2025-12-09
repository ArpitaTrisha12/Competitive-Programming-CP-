#include <bits/stdc++.h>
using namespace std;int main() {
    int n, x; cin >> n;
    vector<int> a(n);
    for (int &v : a) cin >> v;
    cin >> x;
int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (first == -1) first = i;
            last = i; }  }
 cout << first << " " << last;}
