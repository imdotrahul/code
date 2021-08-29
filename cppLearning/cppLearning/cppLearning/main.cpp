#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int numinserted,position;
    cin>>numinserted>>position;
    n++;
    for(int j=n-1;j>=position;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[position-1]=numinserted;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
