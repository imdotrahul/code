#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c,k;
        cin>>n>>c>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0,count =0,ans=0;
        for(int i=0;i<n-1;i++)
        {
            for (int j = i; j < n-1; j++)
            {
                sum= sum+arr[i];
                count++;
                if(sum>=k&&sum<c)
                {
                    break;
                }
            }
            ans=max(ans,count);
        }
        cout<<ans<<"\n";
    }
}