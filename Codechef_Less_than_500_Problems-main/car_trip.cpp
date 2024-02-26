


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i =0 ;i<t ; i++)
    {
        cin>>x;
        if(x<=300)
        {
            cout<<3000<<'\n';
        }
        else
        {
            cout<<x*10<<'\n';
        }
    }
}
