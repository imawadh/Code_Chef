#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i =0 ;i<t; i++)
    {
        int n;
        cin>>n;
        if(n ==1 )
        {
            cout<<1<<'\n';
        }
        else if(n%2 == 0)
        {
            cout<<n/2<<'\n';
        }
        else
        {
            cout<<n/2+1<<'\n';
        }
    }
}
