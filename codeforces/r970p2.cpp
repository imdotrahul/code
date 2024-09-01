#include <iostream>
using namespace std;

string solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a = sqrt(n);
    if(a*a!= n)
    {
       return "No";
    }
    else{
        for (int i = 0; i < a; i++) {
        if (arr[i] != 1 || arr[n-a+i] != 1) {
            return "No";
        }
        for (int i = 1; i < a-1; i++) {
        if (arr[i*a] != 1 || arr[i*a+a-1] != 1) {
            return "No";
        }
        for (int j = 1; j < a-1; j++) {
            if (arr[i*a+j] != 0) {
                return "No";
            }
        }
    }
    return "Yes";
    }       

    }

    }
    

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        cout<<solve()<<"\n";
    }
    return 0;
}