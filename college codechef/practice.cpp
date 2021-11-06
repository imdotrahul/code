#include <iostream>
#include<vector>
#include<tuple>
using namespace std;
bool sortbysecdesc(const pair<long,long> &a,const pair<long,long> &b){
    if(a.second == b.second)
    {
        if(a.first>b.first)
         return false;
        elsef
         return true;
    }
    else
    {
        if(a.second<b.second)
         return false;
        else
         true;
        
    }
}
int main() {
    long N;
    cin>>N;
    long a[N];
    for(long i = 0;i<N;i++){
        cin>>a[i];
    }
    long b[N];
    for(long j = 0;j<N;j++){
        cin>>b[j];
    }
    vector< pair <long,long> > v1;
    for(long i = 0;i<N;i++){
        v1.push_back(make_pair(a[i],b[i]));
    }
    sort(v1.begin(),v1.end(),sortbysecdesc);
    for(long i = 0;i<N;i++){
        cout<<v1[i].first<<" "<<v1[i].second<<" ";
    }
	return 0;
}