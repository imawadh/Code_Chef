#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x;
    cin>>t;
    for(int i =0;i<t;i++)
    {
       cin>>x;
       if(x<=3)
       {
           cout<<"BRONZE\n";
       }
       else if(x<=6)
       {
           cout<<"SILVER\n";
       }
       else
       {
           cout<<"GOLD\n";
       }
    }
}
