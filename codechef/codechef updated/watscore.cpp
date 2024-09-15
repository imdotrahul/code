#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll temp = n;
        vector<pair<int,int> >v;  
        while (temp--)
        {
            ll p,s;
            cin>>p>>s;
            v.push_back({p,s});
        }
        sort(v.begin(),v.end());
        for (ll i = 0; i < v.size()-1; i++)
        {
            if(v[i].first!=v[i+1].first)
            ans+=v[i].second;

            if(v[i+1].first>8)
            break;
        }
        if(v[n-1].first<=8)
        ans+=v[n-1].second;
        cout<<ans<<endl;
        

        
    }
    return 0;
}