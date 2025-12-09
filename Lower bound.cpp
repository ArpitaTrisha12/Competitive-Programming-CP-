#include <bits/stdc++.h>
using namespace std;int lowerBound(vector<int> &a, int x) {
    for (int i = 0; i < a.size(); i++)
        if (a[i] >= x) return i;
    return a.size();}
int main() {
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int &v : a) cin >> v;
    cin >> x;
 cout << lowerBound(a, x);}
