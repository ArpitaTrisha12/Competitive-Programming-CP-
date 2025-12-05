#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<string, string>> s;
    string s1, s2;
    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        s.insert(make_pair(s1, s2));
    }

    cout << s.size();
    return 0;
}
