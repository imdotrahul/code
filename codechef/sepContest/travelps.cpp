#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, A, B, sum = 0;
        cin >> N >> A >> B;
        char forms[N];
        cin >> forms;
        for (int i = 0; i < N; i++) {
            if (forms[i] == '0') {
                sum += A;
            } else {
                sum += B;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}