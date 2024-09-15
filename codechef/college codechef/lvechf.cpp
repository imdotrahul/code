#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define ln '\n'

bool chk(vector<ll> &v, ll k, ll maxi)
{
    ll prv = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        if (prv > k || prv > maxi)
            return false;
        ll rem = maxi - prv;
        prv = max(v[i] - rem, 0ll);
    }
    return (prv == 0);
}

pair<ll, ll> minmax(vector<ll> &v)
{
    pair<ll, ll> r = make_pair(LONG_MAX, LONG_MIN);
    for (auto el : v)
    {
        r.first = min(r.first, el);
        r.second = max(r.second, el);
    }
    return r;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    std::vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    pair<ll, ll> range = minmax(v);

    ll l = range.first, r = range.second;
    ll ans = r;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (chk(v, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << ln;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;

    cin >> t;
    while (t--)
        solve();
    return 0;
}