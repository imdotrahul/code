#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of elements in the array: ";
    int n;
    cin>> n;
    int arr[n];
    cout<<"enter the  elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the maximum element in the array is :  ";
    cout<<*max_element(arr,arr+n);
}