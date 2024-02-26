#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m>=n)
        {
            cout<<n<<'\n';
        }
        else
        {
            cout<<(n-m)+n<<'\n';
        }
    }



}
