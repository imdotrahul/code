#include<iostream>
using namespace std;

void mergeSort(int arr[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (arr[lo] <= arr[mi])
        {
            temp[i] = arr[lo];
            lo++;
        }
        else
        {
            temp[i] = arr[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = arr[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = arr[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        arr[k] = temp[k];
    }
}

void partition(int arr[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(arr, low, mid);
        partition(arr, mid + 1, high);
        mergeSort(arr, low, mid, high);
    }
}
 

int main()
{
    int arr[50];
    int i, size;
 
    cout<<"number of elements: ";
    cin>>size;
    cout<<"enter the elements: ";
    for(i = 0; i < size; i++)
    {
         cin>>arr[i];
    }
    partition(arr, 0, size - 1);
    cout<<" After merge sort: \n";
    for(i = 0;i < size; i++)
    {
         printf("%d   ",arr[i]);
    }
 
   return 0;
}