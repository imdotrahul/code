#include<iostream>
using namespace std;


void merge(int arr[],int l, int mid, int r) //merging all the single elements in sorted order
{
    //there will be two subarrays left and right and we have to merge them so lets make arrays of particular lengths based on the previous length of the arrays as initially is 1.

    int n = mid -l+1;
    int m = r-mid;

    int a[n];//create duplicate arrays for storing the left subarray and righ subarray based on their lengths
    int b[m];

    for(int i = 0;i<n;i++)
    {
        a[i]= arr[l+i];
    }
    for(int i = 0;i<m;i++)
    {
        b[i]=arr[mid+i+1];

    }

    int i = 0;int j = 0;int k = 0; // we will merge the array  i will be the pointer of array 1 and j for array 2, the key will keep track of pointer of the array which we are sorting
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            arr[k]= a[i];
            i++;

        }
        else{
            arr[k]= b[j];
            j++;

        }
        k++;
    }
    while(i<n)
    {
        arr[k] = a[i];
        k++;i++;
    }
    while(j<m)
    {
        arr[k]= b[j];
        j++;
        k++;
    }


}


void mergesort(int arr[],int low, int high) // partitioning the array till all the elements in array are single
{
    if(low>=high){
        return;
    }
    int mid = low + (high-low)/2;

    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
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
        cout<<arr[i]<<" ";
    }
}