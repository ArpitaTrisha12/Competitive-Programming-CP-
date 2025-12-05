#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    int q; 
    cin >> q;
    while (q--) {
        int x; 
        cin >> x;
        string s; 
        cin >> s;
        if (x == 1) {
            int y; 
            cin >> y;
            mp[s] += y;
        } else if (x == 2) {
            mp[s] = 0;
        } else {
            cout << mp[s] << endl;
        }
    }
}
