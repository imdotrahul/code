#include<iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size;
    cin>>size;

    long long arr[size];

    for(int i =0;i<size;i++)
    {
        cin>>arr[i];

    }
    long long result = 0;
    for(int i =1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            result+=(arr[i-1]-arr[i]);
            arr[i]+=(arr[i-1]-arr[i]);
        }
    }
    cout<<result<<" ";
}