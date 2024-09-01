#include <iostream>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int c = a+(b*2);
    if(c%2!=0)
    {
        cout<<"NO"<<"\n";
    }
    else{
        int d = c/2;
        if(d%2==0 || (d%2==1 && a>=2))
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}