#include <iostream>
using namespace std;

void rotatebyone(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void rotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    {
        rotatebyone(arr,n);
    }
}

int main() {
    int t;
    cin>>t;
    int arr[100000],n,d;
    for(int i=0;i<t;i++)
    {       
        cin>>n>>d;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        rotate(arr,d,n);
        for(int k=0;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }    
            cout<<"\n";
    }
}