#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int res = (2*n-k-1)/2;
	    cout<<2*res<<endl;
	    
	}
	return 0;
}