#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

using ll = long long;

void solve() {
    int l, r;
    cin >> l >> r;
    int total_steps = 0;

    vector<ll> numbers(r - l + 1);

    // Initialize numbers array with values from l to r
    for (int n = l; n <= r; ++n) {
        numbers[n - l] = n;
    }

    // Use two pointers to manage the range of numbers to process
    int left = 0;
    int right = 1;

    // Process the array with two pointers
    while (right < numbers.size()) {
        if (numbers[right] == 0 && numbers[left] == 0) {
            left++;
            right++;
        } else if (numbers[right] == 0) {
            numbers[left] = numbers[left] / 3;
            numbers[right] *= 3;
            total_steps++;
        } else {
            numbers[right] = numbers[right] / 3;
            numbers[left] *= 3;
            total_steps++;
        }
    }

    // Output the result for the current test case
    cout << total_steps << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        solve();
    }

    return 0;
}
