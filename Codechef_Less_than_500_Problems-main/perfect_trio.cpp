#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>x>>y>>z;
        if(x == y+z || y == x+z || z == x+y)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
}
