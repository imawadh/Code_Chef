#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z,a;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>x>>y>>z>>a;
        if(x-z==y-a)
        {
            cout<<"Any\n";
        }
        else if(x-z<y-a)
        {
            cout<<"First\n";
        }
        else
        {
            cout<<"Second\n";
        }
        
    }
}
