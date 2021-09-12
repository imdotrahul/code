#include<iostream>
using namespace std;

int checkposition(int arr[],int a,int b,int x)
{
    if(b>=1)
    {
        int m=a+(b-1)/2;
        if(arr[m]==x)
        {
            return m;
        }
        if(arr[m]<x)
        {
            return checkposition(arr,m+1,b,x);
        }
        if(arr[m]>x)
        {
            return checkposition(arr,0,m-1,x);
        }

    }
    return 1;

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
    int checknumber;
    cin>>checknumber;
    int result=checkposition(arr,0,n-1,checknumber);
    cout<<result;
}