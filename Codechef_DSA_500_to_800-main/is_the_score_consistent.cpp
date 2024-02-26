#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,c,d;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>a>>b;
        cin>>c>>d;
        if(c>=a && d>=b)
        {
            cout<<"Possible\n";
        }
        else
        {
            cout<<"Impossible\n";
        }
    }
}
