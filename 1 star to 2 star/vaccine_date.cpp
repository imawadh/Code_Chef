#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d>=l && d<=r)
        {
            cout<<"Take second dose now\n";
        }
        else if(d>=l && d>=r)
        {
            cout<<"Too Late\n";
        }
        else
        {
            cout<<"Too Early\n";
        }
    }
}
