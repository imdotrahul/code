#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
#define int long long
const int mod=1e9+7;

int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int inv(int a) {
    return power(a, mod - 2);
}

int ncr(int n, int r) {
    int res = 1;
    for(int i = 1; i <= r; i++) {
        res = (res * (n - i + 1)) % mod;
        res = (res * inv(i)) % mod;
    }
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 1;
        for(int i = 1; i <= n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(a[j] >= i) cnt++;
            }
            ans = (ans * ncr(cnt, cnt)) % mod;
        }

        cout << ans << endl;
    }

    return 0;
}