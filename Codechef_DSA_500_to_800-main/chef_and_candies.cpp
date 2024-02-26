#include <bits/stdc++.h>
# include <cmath>
using namespace std;

int main() {
	// your code goes here
    int t;
    float n,x;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>n>>x;
        n = n-x;
        if(n>0)
        {
        n = n/4;
        n = ceil(n);
        cout<<n<<'\n';
        }
        else
        {
            cout<<0<<"\n";
        }
        
    }
}
