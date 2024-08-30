#include <iostream>
#include<numeric>
#include<algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        int n, a,b;
        cin>>n>>a>>b;
        int greatest = gcd(a,b);
        int duplicate[n];
        long long arr[n];
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<n;i++)
        {
            duplicate[i]= arr[i]%greatest;
        }
        sort(duplicate,duplicate+n);
        int finalans = duplicate[n-1]-duplicate[0];
        for(int i =0;i+1<n;i++)
        {
            finalans = min(finalans,greatest+duplicate[i]-duplicate[i+1]);
        }
        cout<<finalans<<"\n";
    }
}