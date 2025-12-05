#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int bills[] = {100, 20, 10, 5, 1};
    int ans = 0;

    for (int b : bills) {
        ans += n / b;
        n = n % b;
    }
    cout << ans;
}
