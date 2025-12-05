#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    string b = a; 
    reverse(b.begin(), b.end());

    if (a == b) 
        cout << "Palindrome\n";
    else 
        cout << "Not Palindrome\n";

    return 0;
}
