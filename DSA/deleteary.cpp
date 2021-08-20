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
    int position;
    cin>>position;
    --position;
    for(int j=position;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    for(int i=0; i<n-1; i++)
    {
        cout << arr[i] << "  "; 
    }

}