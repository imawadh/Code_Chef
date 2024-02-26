#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>x>>y;
        if(x==y)
        {
            cout<<"Any\n";
        }
        else if(x<y)
        {
            cout<<"Repair\n";
        }
        else
        {
            cout<<"New Phone\n";
        }
        
    }
}
