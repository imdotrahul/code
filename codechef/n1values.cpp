#include<iostream>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    cout<<1<<" ";
    for(ll i=0;i<n;i++)
    {
        ll p =((ll)1<<i);
        cout<<p<<" ";

    }
    cout <<"\n";

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
