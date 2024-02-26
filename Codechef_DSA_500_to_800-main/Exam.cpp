#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	for (int i = 0 ; i<t ; i++)
	{
	 cin>>x>>y>>z;
	 y = y*x;
	 y = y/2;
	 if(y<z)
	 {
	     cout<<"Yes\n";
	 }
	 else
	 {
	     cout<<"No\n";
	 }
	 
	}

}
