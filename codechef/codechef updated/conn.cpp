#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<7 && n%2 != 0)
        {
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

    }
}