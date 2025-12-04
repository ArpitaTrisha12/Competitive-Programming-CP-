#include<bits/stdc++.h>
using namespace std;
int main(){
int m;
cin>>m;
while(m--){
    int t;
    cin>>t;
    vector<int>a(t);
    for(int i=0;i<t;i++){
            cin>>a[i];

}
int mn=*min_element(a.begin(),a.end());
long long sum=0;
 for(int i=0;i<t;i++){
        sum+=abs(a[i]-mn);
 }

cout<<sum<<endl;}

return 0;

}
