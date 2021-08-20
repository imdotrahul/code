#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int chkval;
    cin>>chkval;
    for(int j=1;j<=n;j++)
    {
        if(arr[j]==chkval)
        {
            cout<<j;
        }
    }
}