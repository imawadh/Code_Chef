#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c;
    cin>>t;
    for (int i =0 ; i<t; i++)
    {
        cin>>a>>b>>c;
        // a is at least 
        // b is at most
        // c is atleast
        if(a<=b && c<=b)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
