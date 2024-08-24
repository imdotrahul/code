#include<iostream>
using namespace std;


void merge(int arr[],int l, int mid,int r)
{
    int n = mid-l+1;
    int m = r-mid;

    int a[n];
    int b[m];
    for(int i =0;i<n;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j = 0;j<m;j++)
    {
        b[j] = arr[mid+1+j];
    }

    int i =0;int j= 0;int k = l;

    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            arr[k]= a[i];i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        arr[k]= a[i];
        i++;k++;
    }
    while(j<m)
    {
        arr[k]= b[j];
        j++;k++;
    }


}
void mergesort(int arr[],int low, int high)
{
    if(low>=high)
    {
        return;
    }
    int mid = low + (high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr, mid+1,high);

    merge(arr,low,mid,high);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
    }
}