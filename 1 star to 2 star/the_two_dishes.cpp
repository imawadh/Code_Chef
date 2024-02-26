#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i =0 ; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            cout<<b<<'\n';
        }
        else
        {
            cout<<a-(b-a)<<'\n';
        }
        
    }
}
