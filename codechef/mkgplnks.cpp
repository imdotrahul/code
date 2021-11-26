#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int temp = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                int j = i + 1;
                while (j < n && s[j] == s[i])
                {
                    j++;
                }
                temp += j;
            }
            else if (i > 0 && s[i] != s[i - 1])
            {
                ans++;
                int k = i + 1;
                while (k < n && s[k] == s[i])
                {
                    k++;
                }
                temp += k;
            }
            else
            {
                int k = i + 1;
                while (k < n && s[k] == s[i])
                {
                    k++;
                }
                temp += k;
            }
        }
        if (temp)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}