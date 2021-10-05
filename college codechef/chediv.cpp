#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
                int count = 0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=x && (arr[i]%y)==0)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}