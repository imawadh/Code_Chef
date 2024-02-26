#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    a = (a*2)+b;
    y = (x*2)+y;
    if(a<y)
    {
        cout<<"Ronaldo\n";
    }
    else if(a==y)
    {
        cout<<"Equal\n";
    }
    else
    {
        cout<<"Messi\n";
    }
}
