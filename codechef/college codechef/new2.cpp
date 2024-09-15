#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        int A[N];
		cin >> N;
        int counter = 0;
         cin>> X >> Y;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            int temp;
            temp = A[i];
            if (temp <= X && (temp % Y) == 0)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }

    return 0;
}