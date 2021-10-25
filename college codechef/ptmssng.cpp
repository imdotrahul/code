#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
 
void MissingPoint(vector<pair<int, int> > V,
                  int N)
{
    map<int, int> mp;
    for (int i = 0; i < V.size(); i++) {
        mp[V[i].first]++;
    }
 
    int x, y;
    for (auto it : mp) {
        if (it.second % 2 == 1) {
            x = it.first;
            break;
        }
    }
    mp.clear();
    for (int i = 0; i < V.size(); i++) {
        mp[V[i].second]++;
    }
 
    for (auto it : mp) {
        if (it.second % 2 == 1) {
            y = it.first;
            break;
        }
    }
 
    cout << x << " " << y;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        
        int N,x,y;
        cin>>N;
        vector<pair<int, int> > V;
        for(int i=0;i<4*N-1;i++)
        {
            cin>>x>>y;
            
            V.push_back({x,y});
        }
        MissingPoint(V, N);
    }
 
    return 0;
}