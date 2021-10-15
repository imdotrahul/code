#include <iostream>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    if (n < 2) return;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < i + 10 && j < n; j++)
        {
            if (j-i == abs(s[j] - s[i]))
            {
                count++;
            }
        }
    }

    cout << count << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
