#include<iostream>
using namespace std;

int main()
{
    int arr[]={7,14,12,67,33,45};
    int temp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}