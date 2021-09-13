#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int a[N], even = 0, odd = 0, sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int min;
        min = even <= odd ? even : odd;

        sum += 2 * min;
        int res = ((N - sum) / 2) + sum;
        if (N % 2 != 0)
            res++;
        cout << endl;
        cout << res << "sum\n";
    }
    return 0;
}