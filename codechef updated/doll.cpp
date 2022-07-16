#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n],count =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>k)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}