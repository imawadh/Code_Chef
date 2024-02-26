#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i =0 ; i<t ; i++)
    {
          cin>>x>>y;
          x = x*3;
          y = y*2;
          if(x<y)
          {
              cout<<x<<'\n';
          }
          else
          {
              cout<<y<<'\n';
          }
    }
}
