#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int x,y,k;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>k;
        x=abs(x);
        y=abs(y);
        if(x%k==0&&y%k==0)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}