//Given n pairs of integers, count how many distinct pairs are there.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    set<pair<int,int>> st;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        st.insert({a, b});
    }

    cout << st.size() << endl; 
    return 0;
}
