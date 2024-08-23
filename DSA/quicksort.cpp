#include<iostream>
using namespace std;


void quicksort(int arr[],int low, int high)
{
    if(low<high)//base condition for recursion
    {
        int i = low;
        int j = high;

        int key = arr[low];

        while(i<=j)
        {
            while(arr[i]<key)
            {
                i++;
            }
            while(arr[j]>key)
            {
                j--;
            }
            if(i<=j)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }


        }
        quicksort(arr,low,j);

        quicksort(arr,i,high);

    }
}

int main()
{
    int n ;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}