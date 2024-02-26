

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>x>>y;
        x = y-x;
        if(x<0)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<x<<'\n';
        }
        
    }
}
