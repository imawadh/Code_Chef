#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>x;
        if(x<1 || x>4)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
}
