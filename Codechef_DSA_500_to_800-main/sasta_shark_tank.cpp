#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        cin>>x>>y;
        x = 10*x;
        y = 5*y;
        if(x==y)
        {
            cout<<"Any\n";
        }
        else if(x<y)
        {
            cout<<"Second\n";
        }
        else
        {
            cout<<"First\n";
        }
    }


}
