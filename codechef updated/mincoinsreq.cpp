#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int result = x%10;
        cout<<result<<"\n";
    }
}