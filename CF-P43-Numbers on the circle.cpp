#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    long long f = 1;
    for(int i=2;i<=x;++i)
    {
        f *= i;
    }
    cout << f << endl;
    return 0;

}
