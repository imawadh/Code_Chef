#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
	// your code goes here
    for(int i = 0; i<t; i++)
    {
        cin>>n>>k;
        
        if(n<=k-1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
