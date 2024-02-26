#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            cout<<"Setter\n";
        }
        else if(y>x && y>z)
        {
            cout<<"Tester\n";
        }
        else
        {
            cout<<"Editorialist\n";
        }
        
    }
}
