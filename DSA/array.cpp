#include<iostream>
using namespace std;

class Solution{
public:
	void printArray(int arr[], int n) {
	    int i;
	    for(i=0;i< n;i++);
	    {
	        cout<<arr[i]<<" ";
	    }
	    // code here
	}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution obj;
        obj.printArray(arr,n);
        cout<<"/n";
    }
    return 0;

}