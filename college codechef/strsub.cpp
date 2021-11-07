#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;

#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define vb  vector<bool>
#define vvi vector<vi>
#define vvb vector<vb>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353


signed main()
{
    FIO;
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;string s;
        cin>>n>>k>>q>>s;
        vi dp(n+1,0);
        ll j = 0,ans = 0,one = 0,zero = 0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
            while(i>j and (zero>k or one>k)){
                if(s[j]=='1'){
                    one--;
                }
                else{
                    zero--;
                }
                j++;
            }
            dp[i+1] = j+1;
        }
        vi pref(all(dp)),myy(all(dp));
        for(ll i=1;i<=n;i++){
            pref[i] = i - dp[i] + 1;
            pref[i]+=pref[i-1];
            myy[i]+=myy[i-1];
        }
        
        cout<<endl;
        while(q--){
            ll l,r;
            cin>>l>>r;
            ll ans = pref[r] - pref[l-1];
            ll ind = upper_bound(all(dp),l) - dp.begin();
            ind--;
            ll index = min(r,ind);
            ll val =((index-l+1)*l) - (myy[index]-myy[l-1]);
            ans-=val;
            cout<<ans<<endl;
        }
    } 
}