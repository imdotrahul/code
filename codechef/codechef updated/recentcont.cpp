#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]=="LTIME108")
            {
                a++;
            }
            else if(s[i]=="START38")
            {
                b++;
            }

        }
        cout<<b<<" "<<a<<"\n";
        
    }
}