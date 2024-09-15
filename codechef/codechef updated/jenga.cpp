#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x<=n)
        {
            if(n%x == 0)
            {
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }

        else{
            cout<<"NO"<<"\n";
        }
    }
}