#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,b1,b2,b3,count;
    cin>>t;
    for (int i = 0;i<t;i++)
    {
        count = 0; // Why reinitialisation think about it Awadh ? while revising....
        cin>>b1>>b2>>b3;
        if(b1 == 0)
        {
            count++;
        }
        if(b2 == 0)
        {
            count++;
        }
        if(b3 == 0)
        {
            count++;
        }
        if (count >1)
        {
            cout<<"Water filling time\n";
        }
        else
        {
            cout<<"Not now\n";
        }
        
    }
    
}
