//Given a string s, determine if it contains exactly one of each vowel (a, e, i, o, u).Print "string is beautiful" if true, otherwise "string is not beautiful".
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    map<char, int> b;
    for (char c : a) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            b[c]++;
        }
    }

    if (b['a']==1 && b['e']==1 && b['i']==1 && b['o']==1 && b['u']==1)
        cout << "string is beautiful\n";
    else
        cout << "string is not beautiful\n";

    return 0;
}
