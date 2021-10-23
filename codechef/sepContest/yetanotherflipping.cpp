#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define allsort(a) sort(a.begin(),a.end())

ll n,k;
void solve()
{
    cin>>n>>k;
    if(k==0)
    {
        cout<<"Yes"<<"\n";
        cout<<0<<"\n";
        return;
    }
    if(k%2==0)
    {
        cout<<"No"<<"\n"; 
        return;
    }
    ll sz = 0;
    for(ll i = 31;i>=0;i--)
    {
        if(((1<<i)&k)!=0)
        {
            sz=i+1;
            break;
        }
    }
    k=(k+(1<<sz)-1)/2;
    cout<<"Yes"<<"\n";
    cout<<sz<<"\n";
    int ans = 1;
    vector<int> a;
    for(int i=sz-2;i>=0;i--)
    {
        if(((1<<i)&k)!=0)
        {
            a.push_back(ans);
            ans+=(1<<i);
        }
        else{
            ans-=(1<<i);
            a.push_back(ans); 
        }
    }
    for(int i=sz-2;i>=0;i--)
    {
        cout<<a[i]<<"\n";
    }
    cout<<ans<<"\n";
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
