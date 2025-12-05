#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    long long p[x];
    for(int i=0;i<x;++i)
    {
        cin >> p[i];
    }

    long long m = p[0];
    int ind = 0 ;
    for(int i=0;i<x;++i)
    {
        if(p[i]<m)
        {
            m = p[i];
            ind = i;
        }
    }
    cout << ind << endl;
    return 0;
}
