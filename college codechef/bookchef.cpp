#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector <pair <int,string> > v;
    vector <pair <int,string> > p;
    while(m--)
    {
        int e,r,q=1;
        string t;
        cin>>e>>r>>t;
        for(int i=0;i<n;i++)
        {
            if(e==a[i])
            {
                v.push_back(make_pair(r,t));
                q=0;
                break;
            }
        }
        if(q)
        {
            p.push_back(make_pair(r,t));
        }
    }
    sort(p.begin(),p.end());
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i].second<<endl;
    }
    for(int i=p.size()-1;i>=0;i--)
    {
        cout<<p[i].second<<endl;
    }
	return 0;
}
