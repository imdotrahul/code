#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    long long n, k;
    cin >> n >> k;
    vector<pair<long long , long long> > a, b;
    int x,  y;
    for (int i = 0; i < n; i++) 
    {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    for (int i = 0; i < k; i++) 
    {
        cin >> x >> y;
        b.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long i = 0, j = 0;
    long long sum = 0;
    while(i < n && j < k)
    {
        if (a[i].first < b[j].second && a[i].second>b[j].first)
        {
            sum += abs(max(a[i].first, b[j].first) - min(a[i].second, b[j].second));
        }
        if(j+1 < k && a[i].second > b[j+1].first) {
            j++;
        }
        else if (i+1 < n && a[i+1].first < b[j].second)
        {
            i++;
        } else {
            i++;
            j++;
        }
    }
    cout << sum << '\n';
    return 0;
}