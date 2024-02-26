#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(y==0)
	    {
	        cout<<0<<'\n';
	    }
	    else if(x>=(y*2))
	    {
	        cout<<y<<'\n';
	    }
	    else
	    {
	        cout<<x-y<<'\n';
	    }
	}

}
