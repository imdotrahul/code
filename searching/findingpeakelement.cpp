#include<iostream>
#include<vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start +(end-start)/2;
        
        
        while(start<end)
        {
            if(arr[mid]<arr[mid+1])
            {
                start = mid +1;
            }
            else{
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return start;
}

int main()
{
    vector<int> v;
    int numberofelemets;
    cin>>numberofelemets;

    for(int i =0;i<numberofelemets;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }

    int result  = peakIndexInMountainArray(v);
    cout<<result;
}