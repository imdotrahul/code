#include <iostream>
#include<math.h>
#define ll long long int
using namespace std;

ll caldoses2(ll x, ll a, ll b) {
    ll eb = b - 2 * a;
    ll e4ac = (eb * eb) + 8 * b * x;
    ll n = (eb + sqrt(e4ac)) / (2 * b);
    return n;
}

ll caldoses(ll x, ll a, ll b, ll c, ll d) {
    ll covax = 0, covis = 0;
    covax = caldoses2(x, a, b);
    covis = caldoses2(x, c, d);
    ll sum = 0;
    int n = 0;
    if (b < d) {
        n += covax;
        sum = (covax * (2 * a + (covax-1) * b)) / 2;
        x = x - sum;
        n += caldoses2(x, c, d);
    } else if(b > d){
        n += covis;
        sum = (covis * (2 * c + (covis-1) * d)) / 2;
        x = x - sum;
        n += caldoses2(x, a, b);
    } else if(b == d && a < c) {
        n += covax;
        sum = (covax * (2 * a + (covax-1) * b)) / 2;
        x = x - sum;
        n += caldoses2(x, c, d);
    } else if (b == d && a > c) {
        n += covis;
        sum = (covis * (2 * c + (covis-1) * d)) / 2;
        x = x - sum;
        n += caldoses2(x, a, b);
    } else {
        n += covax;
        sum = (covax * (2 * a + (covax-1) * b)) / 2;
        x = x - sum;
        n += caldoses2(x, c, d);
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie();
    int z;
    cin >> z;
    ll x, a, b, c, d, p, q, r, s, t, m;
    cin >> x >> a >> b >> c >> d >> p >> q >> r >> s >> t >> m;
    ll res = 0;
    for (int i = 0; i < z; i++) {
        if (i == 0) {
            res = caldoses(x, a, b, c, d);
        }
        else {
            a = (a + res * t) % m + p;
            b = (b + res * t) % m + q;
            c = (c + res * t) % m + r;
            d = (d + res * t) % m + s;
            res = caldoses(x, a, b, c, d);
        }
        cout << res << '\n';
    }
}
