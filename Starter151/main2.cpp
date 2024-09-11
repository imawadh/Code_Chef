#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    float a,b,c;
	    cin>>a>>b>>c;
	    if(c>=b)
	    {
	        cout<<0<<'\n';
	    }
	    else if(a*c<100)
	    {
	        cout<<-1<<'\n';
	    }
	    else{
	        float d = a;
	        c-=1;
	        int ct = 1;
	        while(d<=100)
	        {
	            float f = (d/100 * b) + c;
	            if(f>=b)
	            {
	                cout<<ct<<'\n';
	                break;
	            }
	            ct++;
	            d+=a;
	            c-=1;
	        }
	        
	        
	    }
	}

}
