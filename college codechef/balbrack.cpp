#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int x = 0, y=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n;i++) {
            if (i % 2 == 0) {
                x+= arr[i];
            } else {
                y+=arr[i];
            }
        }
        cout<< max (x,y)<<"\n";
    }
}