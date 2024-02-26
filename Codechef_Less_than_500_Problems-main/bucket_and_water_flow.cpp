#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,w,x,y,z;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        cin>>w>>x>>y>>z;
        if((x-w)>(y*z))
        {
            cout<<"Unfilled\n";
        }
        else if((x-w)<(y*z))
        {
            cout<<"OverFlow\n";
        }
        else
        {
            cout<<"Filled\n";
        }
    }
}
