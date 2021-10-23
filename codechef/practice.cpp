 #include <iostream> 
 #include<math.h>
 #include<algorithm>
 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	 int n,k,j;
	 double i;
	 cin>>n>>k;
	 if(k==0){
	  cout<<"YES"<<"\n"<<0<<endl;
	 }
	 else if (k%2!=0){
	  i=log2(k+1);
	  j=(int)i;
	  if((i-j)==0){
	   cout<<"YES"<<endl;
	   for(j=0;j<i;j++){
	    cout<<pow(2,j)<<endl;
	   }
	  }
	 
	  else{
	   cout<<"NO"<<endl;
	  }
	 }
	} 
	return 0;
}
