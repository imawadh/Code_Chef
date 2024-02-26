#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,b;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        cin>>x>>y>>b;
        b = b*2;
        y = y+b;
        if(x<=y)
        {
            cout<<"Qualify\n";
        }
        else
        {
            cout<<"NotQualify\n";
        }
        
    }
    
}
