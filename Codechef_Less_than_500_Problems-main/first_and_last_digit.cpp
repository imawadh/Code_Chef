#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,f,l;
    cin>>t;
    for(int i =0 ; i<t; i++)
    {
        cin>>n;
        l= n%10;
        while(n!=0)
        {
            f=n%10;
            n/=10;
        }
        cout<<f+l<<'\n';
    }
}
