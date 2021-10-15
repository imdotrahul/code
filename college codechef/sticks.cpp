#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int Arr[n];
        for(int i=0;i<n;i++){
            cin>>Arr[i];
        }
        sort(Arr,Arr+n);
        int Count=0,Area=1;int i=n-1;
        while(i>0 && Count<2){
            if(Arr[i]==Arr[i-1]){
                Count++;
                Area=Area*Arr[i];
                i--;   
            }
            i--;
        }
        if(Count!=2)
        cout<<-1<<"\n";
        else
        cout<<Area<<"\n";
    }
	
		return 0;
}
