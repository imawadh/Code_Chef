#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,m,o;
    cin>>t;
    for(int i =0 ;i<t ; i++)
    {
        cin>>n>>m>>o;
        if(n*m<=o)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
