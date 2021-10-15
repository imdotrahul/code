#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int N,K;
	    cin>>N>>K;
	    
	    int arr[N];
	    int m=0;
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	        m+=arr[i];
	    }
	    
	    sort(arr, arr+N);
	    int A=0, B=0;
	    for(int i=0; i<K; i++){
	        A+=arr[i];
	        B+=arr[(N-1)-i];
	    }
	    
	    cout<<max(abs((m-A)-A), abs((m-B)-B))<<"\n";
	}
	return 0;
}
