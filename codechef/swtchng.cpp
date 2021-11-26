#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int c[n],d[n],sumc=0,sumd=0,result =0;
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
        sumd=sumd+d[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        sumc=sumc+c[i];
    }
    result=sumd+sumc;
    cout<<result;
}