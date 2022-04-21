#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=(a/b);
        if(d>c)
        {
            cout<<"0"<<endl;
        }
        if(d<c)
        {
            cout<<(c-d)<<endl;
        }
    }
}