#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    for(int i = 0; i<t ;i++)
    {
        cin>>n;
        n = n%2;
        if(n==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    
}
