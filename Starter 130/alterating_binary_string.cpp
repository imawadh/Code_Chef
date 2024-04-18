#include <bits/stdc++.h>
using namespace std;

int main() {
	int test ;
	cin>>test;
	for (int i=0; i<test; i++)
	{
	    int num;
	    cin>>num;
	    string str;
	    cin>>str;
	    int count = 0;
	    for (int j = 1;j<str.size();j++)
	    {
	        
	        if(str[j]==str[j-1])
	        {
	            count+=1;
	        }
	    }
	    cout<<count<<'\n';
	}

}
