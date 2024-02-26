#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int a = 0 ; a<t ; a++)
	{
	    cin>>n;
	    n = 10-n;
	    if (n>2)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}

}
