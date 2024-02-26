#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	float b;
	cin>>a>>b;
	if((a%5==0)&&(b>=(a+0.50)))
	{
	    cout<<fixed<<setprecision(2)<<b-a-0.50;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<b;
	}

}
