#include<bits/stdc++.h>
 using namespace std;
int main() {
    int n; cin >> n;
    int a[105], b[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    for (int i = 0; i < n / 2; i++) {
        cout << b[i] << " " << b[n - i - 1] << endl;
    }
    return 0;
}
