#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> count;

    while (t--) {
        string n;
        cin >> n;

        count[n]++;

        if (count[n] > 1) {
            cout << n << count[n] - 1 << endl;
        } 
        else {
            cout << "OK\n";
        }
    }

    return 0;
}
