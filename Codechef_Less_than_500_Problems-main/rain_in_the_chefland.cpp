#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x;
    cin>>t;
	// your code goes here
    for(int i = 0; i<t; i++)
    {
       cin>>x;
       if(x<3)
       {
           cout<<"Light\n";
       }
       else if(x<7)
       {
           cout<<"Moderate\n";
       }
       else
       {
           cout<<"Heavy\n";
       }
    }
}
