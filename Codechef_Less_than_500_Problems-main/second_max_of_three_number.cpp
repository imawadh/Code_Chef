#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	for(int i =0 ; i<t ;i++)
	{
	    cin>>x>>y>>z;
	    if(x>y &&  x>z && y>z)
	    {
	        cout<<y<<'\n';
	    }
	   else if(x>y &&  x>z && y<z)
	    {
	        cout<<z<<'\n';
	    }
	    else if(y>x && y>z && x>z)
	    {
	        cout<<x<<'\n';
	    }
	    else if(y>x && y>z && x<z)
	    {
	        cout<<z<<'\n';
	    }
	    else if(z>x && z>y && x<y)
	    {
	        cout<<y<<'\n';
	    }
	    else
	    {
	        cout<<x<<'\n';
	    }
	    
	}

}
