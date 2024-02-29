#include <bits/stdc++.h>
using namespace std;
// Time excedded 

void max_lenght(string str)
	{
	    int n = str.length();
	    int max =0;
	    for (int i = 0; i<str.length() ; )
	    {
	        int count = 0;
	        char charcter = str[i];
	        while(str[i]==charcter)
	        {
	            count++;
	            i++;
	            if(count>=max)
	            {
	                max=count;
	            }
	        }
	    }
	    cout<<max<<' ';
	}

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b;
	
	
	for(int i = 0 ; i<t ; i++)
	{
	   cin>>a>>b;
	   string str,c;
	   cin>>str;
	   max_lenght(str);
	   for(int j = 0 ; j<b ; j++)
	   {
	       cin>>c;
	      
	       str.append(c);
	       max_lenght(str);
	   }
	   cout<<'\n';
	}

}
