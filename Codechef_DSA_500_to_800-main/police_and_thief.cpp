#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,count=0;
	    cin>>x>>y;
	    if(x==y)
	    {
	        cout<<0<<'\n';
	    }
	    else if(x<y)
	    {
	        while(x!=y)
	        {
	            x+=2;
	            y++;
	            count++;
	        }
	        cout<<count<<'\n';
	    }
	    else
	    {
	        while(x!=y)
	        {
	            x-=2;
	            y--;
	            count++;
	        }
	        cout<<count<<'\n';
	    }
	}

}
