#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	for (int i = 0 ; i<t; i++)
	{
	    cin>>x>>y>>z;
	    if(x*10>=y)
	    {
	        cout<<y*z<<'\n';
	    }
	    else
	    {
	        cout<<x*z*10<<'\n';
	    }
	}

}
