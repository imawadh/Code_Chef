#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
	// your code goes here
    for(int i = 0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            cout<<"Alice\n";
        }
        else if(b>a && b>c)
        {
            cout<<"Bob\n";
        }
        else
        {
            cout<<"Charlie\n";
        }
    }
}
