#include<iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    int n = s.length();
    int final =1;
    int maxi = 1;
    for(int i =1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            final++;
            maxi = max(maxi,final);
        }
        else{
            final=1;
        }

    }
    cout<<maxi<<" ";
}