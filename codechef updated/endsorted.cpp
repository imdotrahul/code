#include<bits.stdc++.h>

#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int ind1,indn;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1) ind1 = i;
        if(arr[i]==n) indn = i;
    }
    int res = 0;
    if(ind1 ==0 && indn == n-1) res =0;
    else if (ind1==0 and indn|-n-1) res = n-1-indn;
    else if (ind1!=0 and indn==n-1) res = ind1;
    elseif{
    res =n-1-indn + ind1;
    if (indn<ind1) res-=1;
    }
    cout<<res<<endl;
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fastio 
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}