typedef long long int li;
#include<bits/stdc++.h>
using namespace std;
struct dish{
    li pos;
    li v;
};
struct tribe{
    li pos;
    li v;
    li req;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        li x,b,c;
        cin>>x;
        cin>>b;
        vector<dish> d(b+1);
        for(int i=0;i<b;i++)
            cin>> d[i].pos >> d[i].v;
        d[b].pos = INT_MAX;
        d[b].v = 1;
        cin>>c;
        vector<tribe> tr(c);
        for(int i=0;i<c;i++)
            cin>> tr[i].pos >>tr[i].req >>tr[i].v;
        li res = 0, i = b, j = c-1;
        bool dempty = false, tempty = false;
        while(1)
        {
            if(i==-1)
            {
                dempty = true;
                break;
            }
            if(j==-1)
            {
                tempty = true;
                break;
            }
            if(d[i].pos< tr[j].pos)
            {
                if(tr[j].req>=res)
                {
                    j--;
                    continue;
                }
                res = max(tr[j].req,res-tr[j].v);
                j--;
            }
            else
            {
                res += d[i].v;
                i--;
            }
        }
        if(dempty)
        {
            while(j>=0)
            {
                if(tr[j].req >= res)
                {
                    j--;
                    continue;
                }
                res = max(tr[j].req,res-tr[j].v);
                j--;
            }
        }
        if(tempty)
        {
            while(i>=0)
            {
                res += d[i].v;
                i--;
            }
        }
        cout << res << "\n";
        
    }
    return 0;
}
