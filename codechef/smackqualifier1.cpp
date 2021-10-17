#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
        while(n--){
        int arr[5],b=0,c=0;
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                b++;
            }
            if(arr[i]==2)
            {
                c++;
            }
        }
        if(b==c)
        {
            cout<<"DRAW"<<"\n";
        }
        if(b>c)
        {
            cout<<"INDIA"<<"\n";
        }
        if(b<c)
        {
            cout<<"ENGLAND"<<"\n";
        }
    }
}