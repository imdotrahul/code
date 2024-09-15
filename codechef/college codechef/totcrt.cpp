#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;

bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second < b.second);
}




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;

    while (t--)
    {
        unordered_map<string,int> ans;
        int n;
        string s;
        int l;
        cin>>n;
        for (int i = 0; i < n*3; i++)
        {
            cin>>s>>l;
            if(ans.find(s) != ans.end()){
                 ans[s] += l;
            }
            else{
                ans.insert({s,l});
            }
        }

        vector<int> fin;
        for(auto i: ans)
        {
            fin.push_back(i.second);
        }

        sort(fin.begin(),fin.end());
        for (int i = 0; i < fin.size(); i++)
        {
            cout<<fin[i]<<" ";
        }

        cout<<"\n";
        
        
        
     
    }
    return 0;
}