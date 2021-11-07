#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int l=0,r=0,x=0;
        cin>>l>>r>>x;
        long long  count = 0;
        for(long long i=l-1;i<=r-1;i=i+1)
        {
            if(arr[i]>=x)
            {
                count=r-i;
                break;
            }

        }
        cout<<count<<"\n";
    }
    
}