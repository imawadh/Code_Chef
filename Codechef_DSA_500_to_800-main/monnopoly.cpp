#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    int p,q,r,s,a,b,c,d,total;
    cin>>t;
    for(int i = 0;i<t;i++)
    {
        cin>>p>>q>>r>>s;
        a = q+r+s;
        b = p+r+s;
        c = p+q+s;
        d = p+q+r;
        if(a<p || b<q || c<r || d<s)
        {
            cout<<"Yes\n";
        }
        else
        {
        cout<<"No\n";
        }
    }
}
