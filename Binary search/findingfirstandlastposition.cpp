#include<iostream>
using namespace std;

int firstposition(int arr[], int size, int key)
{
    int start = 0,ans = -1;
    int end = size -1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid -1;

        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int lastposition(int arr[], int size, int key)
{
    int start = 0,ans = -1;
    int end = size -1;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;

        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[7]={1,2,3,3,3,4,5};

    int index = firstposition(arr,7,3);
    cout<<index<<"\n";
    index = lastposition(arr,7,3);
    cout<<index;


}