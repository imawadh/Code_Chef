#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,x,y;
    cin>>t;
    for(int i =0 ; i<t; i++)
    {
        cin>>n>>x>>y;
        x = x*y;
        if(n<=x)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
}
