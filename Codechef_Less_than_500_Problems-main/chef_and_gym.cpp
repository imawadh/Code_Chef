#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c)
        {
            cout<<2<<'\n';
        }
        else if(a<=c)
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<0<<'\n';
        }
        
    }
}
