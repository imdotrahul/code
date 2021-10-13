#include<iostream>
#include<algorithm>
using namespace std;
void deletion1(int arr[], int size,int index){
   
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
void deletion2(int arr[], int size,int index){
   
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int r=1,count = 0 ;
	   
	    for(int i=n-1;i>=0;i--){
	          for(int j =i-1; j>=0;j--)
	        if(a[i] == a[j] ){
	        r = r*a[i] ;
	        deletion1(a,n,i);
	        deletion2(a,n,j);
            count++;
	        break;
	        }
	        if(count == 2){
	            break;
	        } 
	    }
	    
	    if(count == 2){
	    cout<<r<<endl;}
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}