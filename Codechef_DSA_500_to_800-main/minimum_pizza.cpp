#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,x;
    cin>>t;
    for (int i = 0 ; i<t; i++)
    {
        cin>>n>>x;
        x = x*n; // no. of slices 
        n = x%4; // for more pizza consideration +1 
        x = x/4;    // for no. of pizza 
        if (n==0)
        {
            cout<<x<<"\n";
        }
        else
        {
            cout<<x+1<<"\n";
        }
    }
}
