#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,k;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>k>>x;
        if(k>=x)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
