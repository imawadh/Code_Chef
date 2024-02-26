#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,k;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>k>>x;
        if(k*100<x*10)
        {
            cout<<"Disposable\n";
        }
        else
        {
            cout<<"Cloth\n";
        }
    }
}
