#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n],count = 0,ans=0;
        for(int i=0;i <n; i++)
        {
            cin>>arr[i];
            if (arr[i] % 2 == 0) {
            count++;
            ans = max(ans, count);
        }
 
        else {
            count = 0;
        }
        ans = max(ans, count);
        }
        cout<<ans<<"\n";
    }
    
}