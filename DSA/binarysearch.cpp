#include<iostream>
using namespace std;


bool binarysearch(int arr[],int size, int key)//only applied on the sorted arrays
{
    int start = 0;
    int end = size -1;

    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(key == arr[mid])
        {
            return true;
        }
        else{
            if(key>arr[mid])
            {
                start = mid+1;


            }
            if(key<arr[mid])
            {
                end = mid-1;

            }
            mid = start+(end-start)/2;
        }
    }

    return false;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int number;
    cin>>number;

    bool foundnumber = binarysearch(arr, n,number);

    cout<<foundnumber;
}