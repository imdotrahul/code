#include<iostream>
using namespace std;


void quicksort(int arr[],int low, int high)
{
    if(low<high){

        int i =low-1;int j = high+1;
        int key = arr[low];
        while(i<=j){
            do
            {
                i++;
            } while (arr[i]<key);
            do
            {
                j--;
            } while (arr[j]>key);

            if(i<j)
            {
                swap(arr[i],arr[j]);
                
            }
        }
        if(low<j){
            quicksort(arr,low,j);
        }
        if(i<high){
            quicksort(arr,i,high);
        }

    }
   
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
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


}