#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int N,D;
   cin>>N>>D;
      int arr[N];
      for(int i=0;i<N;i++){
          cin>>arr[i];
      }
    sort(arr,arr+N);
    int number=0;
    for(int i=1;i<N;i++){
      if(arr[i]-arr[i-1]<=D){
          number++;
          i++;
      }  
    }
    cout<<number<<"\n";
   
    return 0;
}

