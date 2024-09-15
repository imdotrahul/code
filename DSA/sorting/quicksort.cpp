#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int t = *a; 
    *a = *b; 
    *b = t; 
}


int divide(int arr[],int x,int n)
{
    int i=x-1,j=0;
    int p=arr[n];
    int temp=0;
    for(int j=x;j<=n;j++)
    {
        if(arr[j]<p)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[n]); 
    return (i + 1); 
}

void quicksort(int arr[],int g,int h)
{
    if (g < h) 
    { 
        int pi = divide(arr, g, h); 
        quicksort(arr, g, pi - 1); 
        quicksort(arr, pi + 1, h); 
    } 
}
void printarray(int arr[],int n)
{
    int i; 
    for (i = 0; i < n; i++) 
    {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    printarray(arr, n); 
}