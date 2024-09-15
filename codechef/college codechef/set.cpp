#include <iostream>
#include <set>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> b;
    for (int i = 0; i < n; i++)
    {
        b.insert(a[i]);
    }
    cout << b.size();
}