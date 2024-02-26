#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,sum,digit;
    cin>>t;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>x;
        sum = 0;
        digit = 0;
        while(x!=0)
        {
            digit = x%10;
            sum = sum+digit;
            x = x/10;
        }
        cout<<sum<<'\n';
        
    }
}
