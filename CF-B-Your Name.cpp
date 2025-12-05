#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string x,y;
        cin >> n >> x >> y;
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(x==y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
