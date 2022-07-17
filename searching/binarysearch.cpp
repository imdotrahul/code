#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start = 0;
    int end  = size -1;
    int mid  =(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    return -1;

}

int main()
{
    int index;
    int arr1[7] = {1,2,3,4,5,6,7};
    int arr2[6] ={4,5,6,7,8,9};

    index = binarysearch(arr1,7,5);
    cout<<index<<"\n";
    index = binarysearch(arr2,6,4);
    cout<<index<<"\n";

}