#include <bits/stdc++.h>
using namespace std;
// solved 
int main() {
	// your code goes here
	int test;
	cin>>test;
	for(int i =0; i<test; i++)
	{
	    string str;
	    cin>>str;
	    int count = 0;
	    for(int i = 0; i<str.size(); i++)
	    {
	        if(str[i]=='1')
	        {
	            count++;
	        }
	    }
	    if(count==1)
	    {
	        cout<<11<<'\n';
	    }
	    else if(count==2)
	    {
	        if((str[0]=='1' && str[1]=='1')||(str[2]=='1' && str[3]=='1'))
	        {
	            cout<<21<<'\n';
	        }
	        else
	        {
	            cout<<121<<'\n';
	        }
	    }
	    else if(count==3)
	    {
	        cout<<231<<'\n';
	    }
	    else
	    {
	        cout<<441<<'\n';
	    }
	}

}
