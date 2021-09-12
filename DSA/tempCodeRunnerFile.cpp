#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arrr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arrr[i];
    }
    int numinserted,position;
    cin>>numinserted>>position;
    n++;
    for(int j=n-1;j>=position;j--)
    {
        arrr[j]=arrr[j-1];
    }
    arrr[position-1]=numinserted;
    for(int i=0;i<n;i++)
    {
        cout<<arrr[i]<<" ";
    }

}
