#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int totalchocs, budget;
    cin >> totalchocs >> budget;
    string chocolates;
    cin >> chocolates;
    vector<int> chocolateCosts(26);
    for (int i = 0; i < 26; ++i) {
        cin >> chocolateCosts[i];
    }

    int maxChocolates = 0;

    for (char free = 'a'; free <= 'z'; ++free) {
        int currentCost = 0;
        int left = 0;
        
        for (int right = 0; right < totalchocs; ++right) {
            if (chocolates[right] != free) {
                currentCost += chocolateCosts[chocolates[right] - 'a'];
            }
            
            
            while (currentCost > budget) {
                if (chocolates[left] != free) {
                    currentCost -= chocolateCosts[chocolates[left] - 'a'];
                }
                ++left;
            }
            
            maxChocolates = max(maxChocolates, right - left + 1);
        }
    }
    
    cout << maxChocolates << "\n";

    return 0;
}
