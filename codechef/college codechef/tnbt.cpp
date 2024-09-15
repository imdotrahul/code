#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int b=0;
        b=*max_element(arr+i+1, arr + n);
        if(b>arr[i])
        {
            cout<<b<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
    }
    cout<<"-1"<<"\n";
}