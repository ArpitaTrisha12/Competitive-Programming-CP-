#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  string s;
  cin >> x >> s;
  int cnt=0;
  for(char c:s)
  {
      if(c== '8')
      {
          cnt++;
      }
  }
  int r = min(cnt,x/11);
  cout << r << endl;
  return 0;
}
