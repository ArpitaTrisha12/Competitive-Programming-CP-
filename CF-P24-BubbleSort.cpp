#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int>a(x);
    for(int i=0;i<x;++i)
    {
        cin >> a[i];
    }
    for(int i=0;i<x-1;++i)
    {
        for(int j=0;j<x-1;++j)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
        for(int k=0;k<x;++k)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
