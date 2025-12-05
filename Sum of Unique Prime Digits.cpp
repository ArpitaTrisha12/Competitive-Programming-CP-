//Given a string n representing digits, find the sum of all unique prime digits (2, 3, 5, 7) present in it.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    set<int> b;

    for(char c : a) {
        int d = c - '0';
        if(d == 2 || d == 3 || d == 5 || d == 7) {
            b.insert(d);
        }
    }

    int sum = 0;
    for(int x : b) sum += x;

    cout << sum << endl;
    return 0;
}
