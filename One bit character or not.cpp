/*You are given a sequence of bits represented as an array of 0s and 1s. A "1-bit character" is represented by a single 0, and a "2-bit character" is represented by 10 or 11. The array always ends with a 0.
Write a C++ program to determine if the last character in the array is a one-bit character (0) or not.
Input:The first line contains an integer n, the number of elements in the array.
The second line contains n integers (0 or 1) representing the bits.
Output:Print true if the last character is a one-bit character, otherwise print false.*/
#include<bits/stdc++.h>
using namespace std;
bool isOneBitCharacter(const vector<int>& bits){
int i=0;
int n =bits.size();
while(i<n-1)
i += bits[i]+1;
return i == n-1; }
int main(){
int n;
cin>>n;
vector<int>bits(n);
for(int i=0;i<n;i++)
cin>>bits[i];
cout<<(isOneBitCharacter(bits)?"true" : "false")<<endl;
return 0;
}
