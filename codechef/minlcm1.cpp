#include<iostream>
using namespace std;
#define ll long long

void solution(){
  ll x,y;
  cin>>x>>y;
  cout<<x*2<<" "<<(x*y)*((x*y)-1)<<endl;
}
int main(){

    
   ll t;
   cin >>t;
    while(t--){ 
      solution();
}
 return 0;
}