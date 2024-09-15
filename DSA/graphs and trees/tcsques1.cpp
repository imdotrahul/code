#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m,l;
    cin>> m>>l;
    int arr[m];

    for(int i = 0;i<m;i++)
    {
        cin>>arr[i];
    }
    vector <int> a;
    int result = 0;

    for(int i =0;i<m;i++)
    {

        for(int j = i+1;j<m;j++)

        if(arr[i]!=arr[j])
        {
            result = abs(arr[i]+arr[j]-l);
            a.push_back(result);

        }
    }
    sort(a.begin(),a.end());
    int minnumber = a[0],count = 1, N= a.size();
    for(int i = 1;i<N;i++)
    {
        if(a[i]==a[i-1])
        {
            count++;
        }
        else{
            break;
        }
    }
    cout<<minnumber<<" "<<count+1;


}