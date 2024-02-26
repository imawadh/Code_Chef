# include <iostream>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    for(int i =0 ; i<t; i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(y%x==0 && y>=0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    /*
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if((n*x)%y==0 && x>=y)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }*/
}