#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	for(int i =0 ; i<t; i++)
	{
	    cin>>x;
	    if (x<67)
	    {
	        cout<<"No\n";
	    }
	    else if(x<45001)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}

}
