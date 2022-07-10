#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=1000)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}