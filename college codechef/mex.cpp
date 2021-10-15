#include <iostream>
#include <vector>

using namespace std;

typedef vector<bool> ab;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int N, K;
		cin >> N >> K;
		ab v(200001, false);
		for (int j = 0; j < N; j++) {
			int s;
			cin >> s;
			v[s] = true;
		}
		int F = 0;
		while (K >= 0 && F <= 200000) {
			if (!v[F]) K--;
			if (K < 0) break;
			F++;
		}
		if (K > 0) {
			cout << 200000 + K << endl;
		} else {
			cout << F << endl;
		}
	}
}