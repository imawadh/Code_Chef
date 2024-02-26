#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x;
    cin>>t;
	// your code goes here
    for(int i = 0; i<t; i++)
    {
       cin>>x;
       if(x<=70)
       {
           cout<<0<<'\n';
       }
       else if(x<=100)
       {
           cout<<500<<'\n';
       }
       else
       {
           cout<<2000<<'\n';
       }
        
    }
}
