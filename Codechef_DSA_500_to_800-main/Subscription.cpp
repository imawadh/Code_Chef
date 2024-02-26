# include <iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for (int i = 0 ; i<t ; i++)
    {
        cin>>a>>b;
        /*If I reverse line c = a%6; a = a/6; and the code will chage exactly as unwanted think about it ? while taking a relook
         */
        c = a%6; 
        a = a/6;
        
        if(c!=0)
        {
            a+=1;
        }
        else{
            a = a;
        }
        cout<<a*b<<"\n";
        
    }
    return 0;
}