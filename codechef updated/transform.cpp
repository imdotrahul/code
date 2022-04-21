#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==0||x%3==0)
        {
            cout<<"NORMAL"<<endl;

        }
        else if(x==1||x%3==1)
        {
            cout<<"HUGE"<<endl;
        }
        else if(x==2 || x%3==2)
        {
            cout<<"SMALL"<<endl;
        }
    }
}