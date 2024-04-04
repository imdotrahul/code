#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find the index of the minimum absolute value element
       int minIndex = 0;
for (int i = 1; i < n; ++i) {
    if (abs(a[i]) < abs(a[minIndex])) {
        minIndex = i;
    }
}


        // Set all elements to 0, except the one with the minimum absolute value
        cout << n - 1 << endl;
        for (int i = 0; i < n; ++i) {
            if (i != minIndex) {
                cout << i + 1 << " " << a[minIndex] << endl;
            }
        }
    }

    return 0;
}
