#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int m = (n - 1) % (k - 1) + 1;
        int l = (n - m) / (k - 1);
        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (i % (k - 1) >= l) {
                b.push_back(a[i]);
            }
        }
        cout << b[b.size() / 2] << endl;
    }
    return 0;
}