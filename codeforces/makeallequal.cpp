#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(int arr[],int size)

{
    if(size ==0|| size == 1)
    {
        return 0;
    }
    sort(arr,arr+size);
    int count = 1;
    int maxi = 0;
    for(int i =1;i<size;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else{
            maxi = max(maxi,count);
            count = 1;
        }
    }
    maxi = max(maxi,count);
    
    return (size-maxi);
}


int main()
{
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        int size;
        cin>>size;
        int arr[size];

        for(int i =0;i<size;i++)
        {
            cin>>arr[i];
        }
        cout<<solution(arr,size)<<"\n";
    }
}