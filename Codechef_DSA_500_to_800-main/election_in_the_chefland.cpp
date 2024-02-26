#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,a,x,count = 0;
    cin>>t;
    for(int i = 0 ;i<t;i++)
    {
        cin>>n>>a;
        for(int j = 0;j<n;j++)
        {
            cin>>x;
            if(x>=a)
            {
                count++;
            }
        }
        cout<<count<<"\n";
        count = 0;
    }
}
