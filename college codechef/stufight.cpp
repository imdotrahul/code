#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int maxm = *max_element(arr,arr+n);
        int counts = count(arr,arr+n,maxm);
        
        if(counts==1)
        {
            printf("peace:)");
            
        }
        else
        {
            printf("fight:(");
        }

    }
}