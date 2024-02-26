#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a;
        cin>>x>>y;
        a  = y-x;
        if(a%8 == 0)
        {
            cout<<a/8<<'\n';
        }
        else
        {
            cout<<(a/8)+1<<'\n';
        }
    }
}
