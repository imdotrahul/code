#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        long long x = 0, y=0;
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (long long i = 0; i < n;i++) {
            if (i % 2 == 0) {
                x+= arr[i];
            } else {
                y+=arr[i];
            }
        }
        cout<< max (x,y)<<"\n";
    }
}