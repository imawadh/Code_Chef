#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,a;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        cin>>n;
        a = n%4;
        if(a==0)
        {
            cout<<n/4<<"\n";
        }
        else
        {
            cout<<(n/4)+1<<"\n";
        }
    }
}
