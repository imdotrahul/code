#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    n = s.size();
    int z = n-2;
    if(n>10)
    {
        cout<<s[0]<<z<<s[n-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }

}