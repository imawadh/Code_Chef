#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,r,q = 0;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        q = 0;
        cin>>n;
        while(n != 0)
        {
            r = n%10;
            q = q*10 + r;
            n=n/10;
        }
        cout<<q<<"\n";
    }
}
