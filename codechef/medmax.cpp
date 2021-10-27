#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n][n];
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    long long mx;
    long long mn = INT64_MAX;
    long long y;
    for (int i = 0; i < n; i++)
    {
        sort(a[i], a[i]+n);
        y = ceil(n+1/2.0);
        mn = mn < a[i][y] ? mn : a[i][y];
        mx += a[i][y];
    }
    if (mx <= k) cout << mn << '\n';
    cout << -1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}