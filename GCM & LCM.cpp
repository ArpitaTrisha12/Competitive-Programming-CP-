#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int g=__gcd(a,b);
int l=(a*b)/g;
cout<<"GCM="<<g<<endl;
cout<<"LCM="<<l<<endl;
return 0;



}
