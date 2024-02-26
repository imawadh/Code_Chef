#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i =0 ; i<t; i++)
	{
	    cin>>x>>y;
	    y = y*2; // why don't you divide it think Awadh think ?
	    if (x<=y)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}

}
