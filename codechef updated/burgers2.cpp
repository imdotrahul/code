#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d/b>=c)
        {
            cout<<"0"<<c<<"\n";
        }
        else if(d/a<c)
        {
            cout<<"-1"<<"\n";
        }
        else{
            int k = (d-(b*c)) /(a-b);
            if((d-(b*c)) % (a-b)!= 0)
            k = k+1;
            cout<<k<<" "<<c-k<<"\n";
        }
    }
}