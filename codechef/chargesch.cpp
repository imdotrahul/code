#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;
typedef long long int ll;
int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
   vector<pair<ll,ll> > v{n,{0,0}} ;
   int a[n],t[n];
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>t[i];
   for(int i=0;i<n;i++) {
       if(t[i]>=a[i])
       v[i]={a[i],t[i]};
       //else v[i]={0,0};
   }
   if(v.size()==0) {
       cout<<0<<endl;
       continue;
   }
   sort(v.begin(),v.end());
   auto maxtime=*max_element(v.begin(),v.end());
   //cout<<maxtime.second<<v[2].first<<endl;
   ll curtime=0,z=0,temp=0;
    vector<int> p;
    for(int i=0;i<n;i++)
    {
       if(v[i].first==0) continue;
       if(temp<maxtime.second)
       {
           temp+=v[i].first;
           z++;
       }
    }
    cout<<z<<endl;
    //q[0]=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i].first==0) continue;
       //cout<<v[i].first<<" "<<v[i].second<<endl;
       if(curtime<maxtime.second)
       {
         auto itr=find(a,a+n,v[i].first);
         if(itr!=a+n)
         {
            // if(curtime+v[i].first<maxtime.second){
           cout<<(distance(a,itr)+1)<<" "<<curtime<<" ";
           curtime+=v[i].first;
           cout<<curtime<<endl;
         }
        }
    }
   
 }
 
 return 0;
}