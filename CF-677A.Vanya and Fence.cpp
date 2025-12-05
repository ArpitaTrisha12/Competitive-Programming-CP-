#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h, x, ans = 0;
    cin >> n >> h;
    while (n--) {
        cin >> x;
        if (x > h) {
            ans += 2;
        } else {
            ans += 1;
        }
    }
    cout << ans;
}
