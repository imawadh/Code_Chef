#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x<=10)
	    {
	        cout<<"Lower Double\n";
	    }
	    else if(x<=15)
	    {
	        cout<<"Lower Single\n";
	    }
	    else if(x<=25)
	    {
	        cout<<"Upper Double\n";
	    }
	    else
	    {
	        cout<<"Upper Single\n";
	    }
	}

}
