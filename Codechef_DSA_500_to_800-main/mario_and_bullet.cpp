#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        y = y/x;
        y = z-y;
        if(y>=0)
        {
            cout<<y<<'\n';
        }
        else
        {
            cout<<0<<'\n';
        }
    }
}
