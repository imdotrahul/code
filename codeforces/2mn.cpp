#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;

    int arr[n-1];
    for(int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }

    int x = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + x);

    for(int i = 1; i <= n; i++)
    {
        if(i > x || arr[i-1] != i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
