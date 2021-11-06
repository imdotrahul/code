#include<iostream>
#include<vector>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
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
        int count = 0;
        for(int i=l-1;i<=r-1;i=i+1)
        {
            if(arr[i]>=x)
            {
                count++;
            }

        }
        cout<<count<<"\n";
    }
    
}