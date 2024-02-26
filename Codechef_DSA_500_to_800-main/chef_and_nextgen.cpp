#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,x,y;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>a>>b>>x>>y;
        a = a*b;
        x = x*y;
        if(x>=a)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
