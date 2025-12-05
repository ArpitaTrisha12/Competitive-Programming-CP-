//Given t test cases, each containing three integers a, b, and c, check if a × b = c. For each test case, print Case: i Yes if true, otherwise Case: i No, where i is the test case number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        long long m=a*b;
        if(m==c)
          cout<<"Case: "<<i<<"Yes\n ";
        else 
          cout<<"Case: "<<i<<"no\n";

    }
}
