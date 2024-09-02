#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],suml=0,sumr=0;

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2==0)
        {
            
            suml+=arr[i];
        }
        else{
            sumr+=arr[i];
        }
    }
    cout<<suml-sumr<<"\n";
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