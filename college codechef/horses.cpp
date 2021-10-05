#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    while(x--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int min=arr[1]-arr[0];
        for(int k=2;k<n;k++)
        {
            if(arr[k]-arr[k-1]<min)
            {
                min=arr[k]-arr[k-1];
            }
        }
        cout<<min<<"\n";
    }
 return 0;
}