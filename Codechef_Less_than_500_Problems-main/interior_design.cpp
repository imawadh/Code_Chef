#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c,d;
    cin>>t;
    for(int i =0 ;i<t ; i++)
    {
        cin>>a>>b>>c>>d;
        a = a+b;
        c = c+d;
        if(a>c)
        {
            cout<<c<<'\n';
        }
        else
        {
            cout<<a<<'\n';
        }
    }
}
