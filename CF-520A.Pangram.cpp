#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
string b;
cin >> b;
int count[26] = {0};
for(int i = 0; i < a; i++){
char ch = tolower(b[i]);
if(ch >= 'a' && ch <= 'z'){
count[ch - 'a'] = 1;
}
}
for(int i = 0; i < 26; i++){
if(count[i] == 0){
cout << "NO";
return 0;
}
}
cout << "YES";
return 0;
}
