#include<iostream>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    ll n,v;
    while(t--)
    {
        cin>>n>>v;
        ll maximum=0,minimum=0;
        maximum=((n-1)*n)/2;
        if(v==1)
        {
            minimum=maximum;
        }
        else{
            if(v>=n-1)
            {
                minimum=n-1;
            }
            else{
                minimum+=v+((n-v)*(n-v+1))/2-1;
            }
        }
        cout<<maximum<<" "<<minimum<<"\n";
    }
}