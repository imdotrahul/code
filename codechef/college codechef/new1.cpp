#include<iostream>
#include<math.h>
using namespace std;

int count(int arr[],int l,int r,int x)
{

        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
           
            return (r-mid);
        }
        if (arr[mid] > x)
        {
            return count(arr, l, mid - 1, x);
        }
        if(arr[mid]<x)
        {
            return count(arr, mid + 1, r, x);
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(q--)
    {
        int l=0,r=0,x=0;
        cin>>l>>r>>x;
        int z=0;
        z = count(arr,l-1,r-1,x);
        cout<<z<<"\n";
    }

    
}