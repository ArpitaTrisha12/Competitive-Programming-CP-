#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long fastPow(long long base, long long exp) {
    long long ans = 1; while (exp > 0) {
        if (exp & 1) ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1; }
    return ans;}
int main() {
    long long n;cin >> n;
 long long even = (n + 1) / 2;
 long long odd  = n / 2;
cout << (fastPow(5, even) * fastPow(4, odd)) % MOD;
}
