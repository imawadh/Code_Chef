#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	for (int i = 0;i<test;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c = a%10;
	    a = a/10;
	    int d = b%10;
	    b = b/10;
	    if(c>d){
	        cout<<"Yes"<<'\n';
	    }
	    else if(c==d)
	    {
	        if(a>b)
	        {
	            cout<<"Yes"<<'\n';
	        }
	        else{
	            cout<<"No"<<'\n';
	        }
	    }
	    else{
	        if(a>b)
	        {
	            cout<<"Yes"<<'\n';
	        }
	        else{
	            cout<<"No"<<'\n';
	    }
	    
	    
	}


    }
}