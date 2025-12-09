#include <bits/stdc++.h>
using namespace std;
string lcp(vector<string>&str){
    if(str.empty()) return "";
    string prefix=str[0];
    for(int i=0;i<str.size();i++) {
        while(str[i].find(prefix)!=0){
            prefix=prefix.substr(0,prefix.size()-1);
            if(prefix.empty()) return ""; }}
    return prefix;}
int main(){
    int n; cin>>n;
    vector<string>str(n);for(int i=0;i<n;i++){
        cin>>str[i];} cout<<lcp(str);
    return 0;}
