#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
#define nl "\n"
#define tb " "
int power(int x, int y, ll p = MOD)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = ((ll)res*x) % p;
        y = y>>1;
        x = ((ll)x*x) % p;
    }
    return res;
}
vector<string> tokenize(string s, string del = " ")
{
    vector<string> result;
	int start = 0;
	int end = s.find(del);
	while (end != -1) {
		result.push_back(s.substr(start, end - start));
		start = end + del.size();
		end = s.find(del, start);
	}
	result.push_back(s.substr(start, end - start));
    return result;
}
/*---------------------------------------------------------------*/

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    queue<ll> q;
    int cnt_m=0;
    int i=0;
    ll ans;
    while(m--)
    {
        int curr_m;
        cin>>curr_m;
        for(;cnt_m<curr_m;cnt_m++)
        {
            if((i<n)&&(q.empty()||v[i]>=q.front()))
            {
                ans = v[i];
                i++;
            }
            else {
                ans = q.front();
                q.pop();
            }
            q.push(ans/2);
        }
        cout<<ans<<nl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
//    cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}
