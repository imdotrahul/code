#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0,i;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++ )
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    for( i=0;i<n;i++){
	        if(ar[i]!=ar[i+1])
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}