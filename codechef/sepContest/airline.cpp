#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;
        if (A <= E && B + C <= D)
        {
            cout << "YES\n";
        }
        else if (B <= E && A + C <= D)
        {

            cout << "YES\n";
        }
        else if (C <= E && A + B <= D)
        {

            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}