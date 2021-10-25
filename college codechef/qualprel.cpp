#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define vi vector<int>
#define vs vector<string>
#define si stack<int>
#define ss stack<string>
#define qi queue<int>
#define qs queue<string>
#define dqi deque<int>
#define dqs deque<string>
#define int long long int
#define pb push_back
#define mp make_pair
#define INF 1e9
#define endl "\n"
#define MOD 1000000007
#define FASTA ios_base::sync_with_stdio(false);
#define FASTB cin.tie(NULL);
bool compare(int a,int b)
{
    return a>=b;
}
int solve(vi arr,int k)
{
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    int n=arr.size();
    int threshold=arr[k-1];

    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=threshold)
            cnt++;
    }
    return cnt;
}
int32_t main()
{
     FASTA;
     FASTB;
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         vi arr(n);
         for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<solve(arr,k)<<"\n";
     }
     return 0;
}
