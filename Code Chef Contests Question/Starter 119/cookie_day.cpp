#include <bits/stdc++.h>
using namespace std;
// solved
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i =0 ; i<t; i++)
	{
	    int n,k;
	    cin>>n>>k;
	    set <int> no_of_cookies_in_a_jar;
	    int remaining = 0;
	    set <int> remaining_set;
	    for(int j = 0; j<n ; j++)
	    {
	        int a; 
	        cin>>a;
	        if(a>=k)
	        {
	            no_of_cookies_in_a_jar.insert(a);
	            remaining = a%k;
	            remaining_set.insert(remaining);
	        }
	        
	    }
	    if(no_of_cookies_in_a_jar.empty()==true)
	    {
	        cout<<-1<<'\n';
	    }
	    else
	    {
	    cout<<*remaining_set.begin()<<'\n';
	    }
	}

}
