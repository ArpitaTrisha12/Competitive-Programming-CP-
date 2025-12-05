#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string z = "I hate ";
    string x = "I hate ";
    string y = "I love ";
    if(n==1)
    {
        cout << "I hate it" << endl;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(i%2==0){
                z = z + "that " + y;
            }
            else {
                z = z + "that " + x;
            }
        }
        cout << z + "it" << endl;
    }
 
    return 0;
}
