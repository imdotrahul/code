#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n)
{
    int i,j,index;
    for ( i=0;i<n-1;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j] < arr[index])
            index = j;
        }
        swap(&arr[index], &arr[i]);
    }
}
void print(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
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
    sort(arr,n);
    print(arr,n);   
}