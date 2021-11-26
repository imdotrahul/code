#include<iostream>
using namespace std;

int substrings(int n)
{
    int result = (n*(n+1))/2;
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int x=(n-k)/k;
        int a=(n-k)%k;
        int onesubs = substrings(x);
        int zeros = substrings(a);
        cout<<onesubs+zeros<<"\n";

    }
}
