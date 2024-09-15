#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long s, i, c, k;

        cin >> s >> c >> k;

        long long array[s];

        for (i = 0; i < s; i++)
            cin >> array[i];

        long long count = 0, sum = 0, ans = 0, j;

        for (i = 0; i < s; i++)
        {
            count = 0;
            sum = 0;
            for (j = i; j < s; j++)
            {
                sum = sum + array[j];
                count++;
                if (sum > c)
                {
                    sum = sum - array[j];
                    count--;
                    break;
                }
            }
            if (sum < k)
            {
                count = 0;
            }
            ans = max(count, ans);
        }
        cout << ans << endl;
    }
}