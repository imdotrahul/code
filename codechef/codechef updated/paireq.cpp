#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while(t--){
	    cin >> n;
	    vector <int> a;
	    int max=1,temp,flag=1;
	    for(int i=0; i<n; ++i){
	        cin >> temp;
	        a.push_back(temp);
	    }
	    sort(a.begin(),a.end());
	    for(int i=1; i<n; ++i){
	        if(a[i] == a[i-1])
	            flag+=1;
	        else{
	            if(flag>max)
	                max=flag;
	            flag=1;
	        }
	    }
	    if(flag>max)
	        max=flag;
	    cout << n-max << endl;
	}
	return 0;
}

