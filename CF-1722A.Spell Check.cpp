#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        if (s == "Timru") {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
