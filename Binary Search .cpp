#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>s(n);
for(int i=0;i<n;i++){
  cin>>s[i];
}
int target;
cin>>target;
sort(s.begin(),s.end());
if(binary_search(s.begin(),s.end(),target))
  cout<<"Found";
else
   cout<<"NotFound";
return 0;
}
