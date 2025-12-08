//binary search


#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &a, int l, int r, int x) {
    if (l > r) return -1;

    int mid = (l + r) / 2;

    if (a[mid] == x) return mid;
    if (a[mid] > x)  return binarySearch(a, l, mid - 1, x);
    return binarySearch(a, mid + 1, r, x);
}

int main() {
    int n; cin >> n;
    vector<int> a(n);

    for (int &x : a) 
      cin >> x;

    int key; 
    cin >> key;

    cout << binarySearch(a, 0, n - 1, key);
}
