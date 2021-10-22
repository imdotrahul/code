#include<iostream>
using namespace std;
void solve(){
  int x,y;
  cin>>x>>y;

  int cnt = 0;
  while(x != y){
    if(y>x){
      x += 2;
    }
    else{
      x -= 1;
    }
    cnt++;
  }
  cout<< cnt << "\n";

} 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);
    int T = 1;
    cin >> T;
    for(int i=1;i<=T;i++){
        solve();
    }
 
    return 0;
}