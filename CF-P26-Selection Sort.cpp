#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >>x;
    int a[x];
    for(int i=0;i<x;++i)
    {
        cin >> a[i];
    }
    for(int i=0;i<x-1;++i)
    {
        int mi = i;
        for(int j=i+1;j<x;++j)
        {
            if(a[j]<a[mi])
            {
                mi = j;
            }
        }
        swap(a[i],a[mi]);
        for(int k=0;k<x;++k)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
