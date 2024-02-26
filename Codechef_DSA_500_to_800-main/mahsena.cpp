#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,num,count_even = 0,count_odd = 0;
    cin>>n;
    for(int i = 0 ; i<n ;i++)
    {
        cin>>num;
        if(num%2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    if(count_even>count_odd)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
}
