#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int children,candies, extra; 
        cin>>children>>candies;
        if(children<=candies)
        {
            cout<<"0"<<"\n";
        }
        else{
            extra = children - candies;
            int x = extra/4;
            if(extra%4==0)
            {
                cout<<x<<"\n";
            }
            else{
                cout<<x+1<<"\n";
            }
            
        }
    }
}