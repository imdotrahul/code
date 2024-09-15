#include<iostream>
#include<stack>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    stack<char> a;
    string s;
    cin>>s;
    int x  = s.length();

    int i =0,count = 0;
    while(i<x)
    {
        if(a.empty() && s[i]==')')
        {
            i++;
        }
        else{
            if(s[i]=='(')
            {
                a.push(s[i]);
            }
            else if(s[i]==')')
            {
                a.pop();
                count++;
            }
            i++;
        }
        
        
    }
    cout<<count;


}