#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,count =0;
    cin>>t;
    
    for (int i = 0 ;i<t ; i++)
    {
       cin>>n;
       int arr;// when i had added arr[n] it was giving runtime error think about it Awadh
       for(int j = 0; j<n ; j++)
       {
           cin>>arr;
           if(arr>=1000)
           {
               count++;
           }
       }
       cout<<count<<"\n";
       count=0;
       
    }
}
