#include <bits/stdc++.h>
using namespace std;
// solved
int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i =0 ; i<t ; i++)
	{
	    int arr[5];
	    int count =0;
	    for(int j =0 ; j<5 ; j++)
	    {
	        cin>>arr[j];
	        if(arr[j]==0)
	        {
	         count++;   
	        }
	    }
	    if(count<=1)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}

}
