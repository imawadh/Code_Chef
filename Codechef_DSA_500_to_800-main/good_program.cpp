#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n;
    cin>>t;
    for(int i = 0 ;i<t; i++)
    {
        cin>>n;
        if (n%4 == 0)
        {
            cout<<"Good\n";
        }
        else
        {
            cout<<"Not Good\n";
        }
    }
}
