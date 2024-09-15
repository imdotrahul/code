#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int  count = 1, max = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
            }
            else{
                max = count;
                count = 1;
            }
        }
        if(count>max)
        {
            max = count;
        }
        cout<<n-max<<"\n";
    }
}