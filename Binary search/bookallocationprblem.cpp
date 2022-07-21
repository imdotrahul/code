#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid)//find if the mid is a possible outcome or not
{
    int studentcount = 1;
    int pagesum = 0;

    for(int i =0;i<n;i++)
    {
        if(pagesum + arr[i]<= mid)
        {
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }

    }
    return true;
}

int allocatebooks(int arr[],int n,int m)
{
    int s = 0;
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
    }

    int e = sum;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid -1;  
        }
        else {
            s = mid +1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[9]={10,20,30,40,50,60,70,80,90};

    int result = allocatebooks(arr,9,3);
    cout<<result;

}