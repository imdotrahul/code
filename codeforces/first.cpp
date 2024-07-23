#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct FlowerType {
    long long petals;
    long long quantity;

    FlowerType(long long p, long long q) : petals(p), quantity(q) {}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        long long m;
        cin >> n >> m;

        vector<FlowerType> flowerTypes;
        for (int i = 0; i < n; ++i) {
            long long petals;
            cin >> petals;
            flowerTypes.emplace_back(petals, 0);
        }

        for (int i = 0; i < n; ++i) {
            cin >> flowerTypes[i].quantity;
        }

        sort(flowerTypes.begin(), flowerTypes.end(), [](const FlowerType& a, const FlowerType& b) {
            return a.petals < b.petals;
        });

        long long maxPetals = 0;
        long long currentCost = 0;
        long long currentPetals = 0;
        int start = 0;

        for (int end = 0; end < n; ++end) {
            FlowerType& endFlower = flowerTypes[end];
            currentCost += endFlower.petals * endFlower.quantity;
            currentPetals += endFlower.petals * endFlower.quantity;

            while (start <= end && (currentCost > m || (flowerTypes[end].petals - flowerTypes[start].petals > 1))) {
                FlowerType& startFlower = flowerTypes[start];
                currentCost -= startFlower.petals * startFlower.quantity;
                currentPetals -= startFlower.petals * startFlower.quantity;
                ++start;
            }

            if (currentCost <= m) {
                maxPetals = max(maxPetals, currentPetals);
            }
        }

        cout << maxPetals << '\n';
    }

    return 0;
}
