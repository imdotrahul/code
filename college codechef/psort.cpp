#include<iostream>
#include<algorithm>
#include <tuple>
#include <vector>
using namespace std;

bool sortcol(const pair<long long, long long>& l, const pair<long long,long long>& r)
{
    if (l.second > r.second) return true;
    else if (l.second == r.second && l.first < r.first) return true;
    else return false;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    long long n;
    cin>>n;
    vector<pair<long long,long long> > a;
    long long arr[n],brr[n];
    for(long long i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin >> brr[i];
    }
    for (long long i = 0; i < n; i++)
    {
        a.push_back(make_pair(arr[i], brr[i]));
    }
    sort(a.begin(), a.end(), sortcol);
    
    for(long long i=0;i<n;i++)
    {
        cout << a[i].first << " " << a[i].second << " ";
    }
}